#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Quadtree.h"

// Struct to store city information from the city file
struct City {
    string cityName;                   // Name of the city
    int x_coordinate, y_coordinate;    // X and Y coordinates of the city
};

// Struct to store query parameters from the query file
struct forQuery {
    int radius, x_coordinate, y_coordinate;
    // Radius for the query
    // X and Y coordinates of the query center
};

// A helper function to check if a city name contains spaces
bool cityNameHasSpace(string name) {
    for (int i = 0; i < name.length(); i++) {
        if (name[i] == ' ') {   // If a space is found, return true
            return true;
        }
    }
    return false;   // No spaces found
}

int main() {

    ifstream cityFile("cities.txt");        // Open the cities file
    int topRightCornerX, topRightCornerY;     // Coordinates of the top-right corner of the 2D space
    vector<City> citiesVec;                   // Vector to store the cities
    string tempLine;                          // Temporary string to read lines from the file

    ifstream queryFile("queries0.txt");     // Open the queries file
    vector<forQuery> queryVec;                // Vector to store the queries
    string tempLine2;                         // Temporary string to read lines from the queries file
    int queryX, queryY, radius;               // Query parameters

    Quadtree qt;    // Create a Quadtree object

    // Check if the cities file opens successfully
    if (!cityFile.is_open()) {
        cerr << "Error opening city file" << endl;  // Print error if file cannot be opened
        return 1;
    }

    // Read the top-right corner coordinates from the first line of the cities file
    getline(cityFile, tempLine);
    istringstream tempStream(tempLine);
    tempStream >> topRightCornerX >> topRightCornerY;

    // Validate that the coordinates are non-negative
    if (topRightCornerX < 0 || topRightCornerY < 0) {
        cerr << "Error! Upper-right corner coordinates can not be NEGATIVE!" << endl;
        return 1;
    }

    // Read each city from the file
    while (getline(cityFile,tempLine)) {
        istringstream tempStream(tempLine); // Parse the line
        City myCity;
        tempStream >> myCity.cityName >>myCity.x_coordinate >> myCity.y_coordinate;

        // Validate city coordinates
        if (myCity.x_coordinate < 0 || myCity.y_coordinate < 0 || myCity.y_coordinate > topRightCornerY || myCity.x_coordinate > topRightCornerX ) {
            cerr << "Error! Invalid coordinates for city in cityfile!" << endl;
            return 1;
        }

        // Validate city name (no spaces allowed)
        if (cityNameHasSpace(myCity.cityName) == true) {
            cerr << "Error! Name of the city can not have space in it!" << endl;
            return 1;
        }
        citiesVec.push_back(myCity);    // Add the city to the vector
    }
    cityFile.close();   // Close the city file

    // Insert each city into the quadtree
    for (int i = 0; i < citiesVec.size(); i++) {
        qt.insert(citiesVec[i].x_coordinate, citiesVec[i].y_coordinate, citiesVec[i].cityName);
    }
    qt.printQuadtree(); // Print the structure of the quadtree

    // Check if the queries file opens successfully
    if (!queryFile.is_open()) {
        cerr << "Error opening query file" << endl; // Print error if file cannot be opened
        return 1;
    }

    // Read each query from the file
    while (getline(queryFile,tempLine2)) {
        forQuery myQuery;
        int pos_of_comma1, pos_of_comma2;

        // Find the positions of commas and extract query parameters
        pos_of_comma1 = tempLine2.find(',');
        queryX = stoi(tempLine2.substr(0, pos_of_comma1));

        pos_of_comma2 = tempLine2.find(',', pos_of_comma1+1);
        queryY = stoi(tempLine2.substr(pos_of_comma1+2, pos_of_comma2 - pos_of_comma2 - 2));

        radius = stoi(tempLine2.substr(pos_of_comma2+2, tempLine2.length()-1));

        myQuery.x_coordinate = queryX;
        myQuery.y_coordinate = queryY;
        myQuery.radius = radius;

        // Validate query coordinates
        if (myQuery.x_coordinate < 0 || myQuery.y_coordinate < 0 || myQuery.y_coordinate > topRightCornerY || myQuery.x_coordinate > topRightCornerX ) {
            cerr << "Error! Invalid coordinates for city in queryfile!" << endl;
            return 1;
        }
        queryVec.push_back(myQuery);    // Add the query to the vector
    }
    queryFile.close();  // Close the queries file

    // Process each query
    for (int i = 0; i < queryVec.size(); i++) {
        qt.queryProcess(queryVec[i].x_coordinate, queryVec[i].y_coordinate, queryVec[i].radius);
        if (i != queryVec.size() - 1) {
            cout << endl;   // Print an empty line between queries
        }
    }
    return 0;
}
