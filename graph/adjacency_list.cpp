

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"

using namespace std;

void AddEdge(vector<int> adj[], int u, int v) {
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void PrintGraph(vector<int> adj[], int V) {
  for (int i = 0; i < V; ++i) {
    cout << "Adjacency list of vertex " << i << '\n' <<"head";
    for (const auto val : adj[i]) {
      cout << "-> " << val << ' ';
    }
    cout << '\n';
  }
}

int main() {
  const int V = 5;
  vector<int> adj[V];
  AddEdge(adj, 0, 1);
  AddEdge(adj, 0, 4);
  AddEdge(adj, 1, 2);
  AddEdge(adj, 1, 3);
  AddEdge(adj, 1, 4);
  AddEdge(adj, 2, 3);
  AddEdge(adj, 3, 4);
  PrintGraph(adj, V);

  return 0;
}