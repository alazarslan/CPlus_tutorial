//
// Created by Ismail Alaz Arslan on 13.11.2024.
//

#include "Quadtree.h"

// Inserts a new city into the quadtree with given coordinates and name.
void Quadtree::insert(int x, int y, string cityName) {
    Node* newNode = new Node(cityName, x, y); // Create a new node with city information.

    // If the quadtree is empty, set the new node as the root.
    if (root == nullptr) {
        root = newNode;
        return;
    }
    // Otherwise, recursively find the correct position for the new node.
    insertToQuadtree(newNode, root);
}

// Processes a query to find cities within the specified radius from a given point.
void Quadtree::queryProcess(int x, int y, int radius) {
    vector<string> foundCities;     // Stores the cities within the radius.
    vector<string> visitedCities;   // Stores the cities visited during the search.

    // Perform the search on the quadtree.
    searchQuadtree(root, x, y, radius, foundCities, visitedCities);

    // Print the cities found within the radius.
    if (foundCities.empty()) {
        cout << "<None>" << endl;   // Print "<None>" if no cities are found.
    }
    else {
        for (int i = 0; i < foundCities.size(); i++) {
            cout << foundCities[i];
            if (i != foundCities.size() - 1) {
                cout << ", ";
            }
            else {
                cout << endl;
            }
        }
    }

    // Print the cities visited during the search.
    for (int i = 0; i < visitedCities.size(); i++) {
        cout << visitedCities[i];
        if (i != visitedCities.size() - 1) {
            cout << ", ";
        }
        else {
            cout << endl;
        }
    }
}

// Prints the structure of the quadtree.
void Quadtree::printQuadtree() {
    pretty_print(root); // Start the recursive print process from the root.
    cout << endl;
}

// Determines the quadrant of a node relative to its parent.
string Quadtree::compareNode(Node *point, Node *parent) {
    if (point->x_coord < parent->x_coord) {     // West of the parent.
        if (point->y_coord < parent->y_coord) { // South-West quadrant.
            return "SW";
        }
        else {  //North-West quadrant.
            return "NW";
        }
    }
    else if (point->y_coord < parent->y_coord) {    // South-East quadrant.
        return "SE";
    }
    else {  // North-East quadrant.
        return "NE";
    }
}

// Calculates the Euclidean distance between two points (x1, y1) and (x2, y2).
double Quadtree::distanceCalculator(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Inserts a new node into the correct position in the quadtree recursively.
void Quadtree::insertToQuadtree(Node *currentPoint, Node *&root) {
    Node *parentNode, *tempNode;
    string quadrant;

    // If the current root is empty, insert the node here.
    if (root == nullptr) {
        root = currentPoint;
        return;
    }

    else {
        tempNode = root;    // Start traversal from the root.

        // Traverse the quadtree to find the correct position for the new node.
        while ( tempNode != nullptr && (tempNode->x_coord != currentPoint->x_coord || tempNode->y_coord != currentPoint->y_coord) ) {
            parentNode = tempNode;  // Keep track of the parent node.
            quadrant = compareNode(currentPoint, tempNode); // Determine the quadrant.
            if (quadrant == "NE") {
                tempNode = tempNode->NE;
            }
            else if (quadrant == "NW") {
                tempNode = tempNode->NW;
            }
            else if (quadrant == "SE") {
                tempNode = tempNode->SE;
            }
            else {
                tempNode = tempNode->SW;
            }
        }

        // If the position is found, insert the new node into the correct quadrant.
        if (tempNode == nullptr) {
            if (quadrant == "NE")
                parentNode->NE = currentPoint;
            else if (quadrant == "NW")
                parentNode->NW = currentPoint;
            else if (quadrant == "SE")
                parentNode->SE = currentPoint;
            else
                parentNode->SW = currentPoint;
        }
    }
}

// Searches the quadtree for cities within a given radius from a center point.
void Quadtree::searchQuadtree(Node *currentPoint, int centerX, int centerY, int radius,
    vector<string> &citiesWithinRadius, vector<string> &citiesVisited)
{
    if (currentPoint != nullptr) {  // If the node exists, process it.

        // Add the current city's name to the visited cities list.
        citiesVisited.push_back(currentPoint->cityName);

        // Calculate the distance between the center point and the current city.
        double distanceBetweenCities = distanceCalculator(centerX, centerY, currentPoint->x_coord, currentPoint->y_coord);

        // If the city is within the radius, add it to the found cities list.
        if (distanceBetweenCities <= radius) {
            citiesWithinRadius.push_back(currentPoint->cityName);
        }

        // Recursively search each relevant quadrant if it overlaps with the search radius.

        // Check if the current point is within the bounds for the SE (South-East) quadrant
        // If the x-coordinate of the current point is less than or equal to (centerX + radius)
        // and the y-coordinate is greater than (centerY - radius),
        // also ensure it does not exceed the circle's radius in the NE (North-East) direction.
        // If valid, recursively search in the SE quadrant.
        if (currentPoint->x_coord <= centerX + radius
        &&  currentPoint->y_coord > centerY - radius
        &&  !(currentPoint->x_coord > centerX
              && currentPoint->y_coord < centerY
              && distanceBetweenCities > radius) )
        {
            searchQuadtree(currentPoint->SE, centerX, centerY, radius, citiesWithinRadius, citiesVisited);
        }

        // Check if the current point is within the bounds for the SW (South-West) quadrant
        // If the x-coordinate of the current point is greater than (centerX - radius)
        // and the y-coordinate is greater than (centerY - radius),
        // also ensure it does not exceed the circle's radius in the NW (North-West) direction.
        // If valid, recursively search in the SW quadrant.
        if (currentPoint->x_coord > centerX - radius
        &&  currentPoint->y_coord > centerY - radius
        &&  !(currentPoint->x_coord < centerX
              && currentPoint->y_coord < centerY
              && distanceBetweenCities > radius) )
        {
            searchQuadtree(currentPoint->SW, centerX, centerY, radius, citiesWithinRadius, citiesVisited);
        }

        // Check if the current point is within the bounds for the NE (North-East) quadrant
        // If the x-coordinate of the current point is less than or equal to (centerX + radius)
        // and the y-coordinate is less than or equal to (centerY + radius),
        // also ensure it does not exceed the circle's radius in the SE (South-East) direction.
        // If valid, recursively search in the NE quadrant.
        if (currentPoint->x_coord <= centerX + radius
        &&  currentPoint->y_coord <= centerY + radius
        &&  !(currentPoint->x_coord > centerX
              && currentPoint->y_coord > centerY
              && distanceBetweenCities > radius) )
        {
            searchQuadtree(currentPoint->NE, centerX, centerY, radius, citiesWithinRadius, citiesVisited);
        }

        // Check if the current point is within the bounds for the NW (North-West) quadrant
        // If the x-coordinate of the current point is greater than (centerX - radius)
        // and the y-coordinate is less than or equal to (centerY + radius),
        // also ensure it does not exceed the circle's radius in the SW (South-West) direction.
        // If valid, recursively search in the NW quadrant.
        if (currentPoint->x_coord > centerX - radius
        &&  currentPoint->y_coord <= centerY + radius
        &&  !(currentPoint->x_coord < centerX
              && currentPoint->y_coord > centerY
              && distanceBetweenCities > radius) )
        {
            searchQuadtree(currentPoint->NW, centerX, centerY, radius, citiesWithinRadius, citiesVisited);
        }
    }
    return;
}

// Recursively prints the quadtree in a structured way for debugging purposes.
void Quadtree::pretty_print(Node *quadnode) const {
    if (quadnode != nullptr) {
        cout << quadnode->cityName << endl; // Print the current city's name.
        pretty_print(quadnode->SE);         // Print the southeast quadrant.
        pretty_print(quadnode->SW);         // Print the southwest quadrant.
        pretty_print(quadnode->NE);         // Print the northeast quadrant.
        pretty_print(quadnode->NW);         // Print the northwest quadrant.
    }
}

