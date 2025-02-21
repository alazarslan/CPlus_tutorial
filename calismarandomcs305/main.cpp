#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <fstream>

using namespace std;

// Function to check if the graph is bipartite
bool isBipartite(const vector<vector<int>>& adj, int V) {
    vector<int> color(V, -1); // -1 indicates uncolored

    // Iterate through all vertices to handle disconnected graphs
    for (int i = 0; i < V; ++i) {
        if (color[i] == -1) { // If vertex is uncolored
            queue<int> q;
            q.push(i);
            color[i] = 0; // Start coloring with 0

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : adj[u]) { // Iterate through neighbors
                    if (color[v] == -1) { // If neighbor is uncolored
                        color[v] = 1 - color[u]; // Assign the opposite color
                        q.push(v);
                    } else if (color[v] == color[u]) { // If same color as current
                        return false; // Not bipartite
                    }
                }
            }
        }
    }
    return true; // Graph is bipartite
}

int main() {
    string filename;
    cout << "Enter the file name (e.g., 'graph.txt'): ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int V, E;
    file >> V >> E;

    // Adjust vertex indexing if the input uses 1-based indices
    vector<vector<int>> adj(V);
    for (int i = 0; i < E; ++i) {
        int u, v;
        file >> u >> v;
        u--; // Convert to 0-based indexing
        v--; // Convert to 0-based indexing
        adj[u].push_back(v);
        adj[v].push_back(u); // Since the graph is undirected
    }

    file.close();

    if (isBipartite(adj, V)) {
        cout << "The graph is bipartite." << endl;
    } else {
        cout << "The graph is not bipartite." << endl;
    }

    return 0;
}
