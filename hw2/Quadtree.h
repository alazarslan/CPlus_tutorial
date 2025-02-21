//
// Created by Ismail Alaz Arslan on 13.11.2024.
//

#ifndef QUADTREE_H
#define QUADTREE_H

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Quadtree {
public:

    // Constructor: Initializes the root of the quadtree to nullptr (an empty tree).
    Quadtree() : root(nullptr) {}

    // Function to insert a city with given coordinates and name into the quadtree.
    void insert(int x, int y, string cityName);

    // Function to process a query by finding cities within a given radius from a point (x, y).
    void queryProcess(int x, int y, int radius);

    // Function to print the quadtree.
    void printQuadtree();

private:

    // Node struct: Represents each city in the quadtree as a node.
    struct Node {
        string cityName;        // The name of the city.
        int x_coord, y_coord;   // The x and y coordinates of the city.
        Node* NE;               // Pointer to the northeast child.
        Node* NW;               // Pointer to the northwest child.
        Node* SE;               // Pointer to the southeast child.
        Node* SW;               // Pointer to the southwest child.

        // Constructor: Initializes a node with city name, x and y coordinates, and null children.
        Node(string city, int x, int y)
            : cityName(city), x_coord(x), y_coord(y), NE(nullptr), NW(nullptr), SE(nullptr), SW(nullptr)
        {};
    };

    Node* root; // The root of the quadtree.

    // Helper function to determine the quadrant of a child node relative to a parent node.
    // Returns "NE", "NW", "SE", or "SW" depending on the position of the child.
    string compareNode(Node* point, Node* parent);

    // Helper function to calculate the Euclidean distance between two points.
    double distanceCalculator(int x1, int y1, int x2, int y2);

    // Recursive function to insert a node into the appropriate position in the quadtree.
    void insertToQuadtree(Node* currentPoint, Node* &parent);

    // Recursive function to search the quadtree for cities within a given radius.
    // Populates two vectors:
    // - citiesWithinRadius: List of cities within the specified radius.
    // - citiesVisited: List of cities visited during the search
    void searchQuadtree(Node* currentPoint, int centerX, int centerY, int radius, vector<string>& citiesWithinRadius, vector<string>& citiesVisited);

    // Recursive function to print the structure of the quadtree.
    // Outputs the city name at each node and traverses the tree in the order:
    // SE -> SW -> NE -> NW
    void pretty_print(Node* quadnode) const;
};
#endif //QUADTREE_H
