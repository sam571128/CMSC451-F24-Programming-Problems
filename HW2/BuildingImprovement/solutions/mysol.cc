#include <assert.h>
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

vector<bool> visited;   // keeps track of which vertices are already visited

// runs depth first search starting at vertex v.
// each visited vertex is appended to the output vector when dfs leaves it.
void dfs(int v, vector<vector<int>> const& adj, vector<int>& output) {
  visited[v] = true;
  for (auto u : adj[v])
    if (!visited[u])
      dfs(u, adj, output);
  output.push_back(v);
}

// input: adj -- adjacency list of G
// output: components -- the strongy connected components in G
void strongly_connected_components(vector<vector<int>> const& adj,
                                   vector<vector<int>>& components) {
  int n = adj.size();
  components.clear();

  vector<int> order;   // will be a sorted list of G's vertices by exit time

  visited.assign(n, false);

  // first series of depth first searches
  for (int i = 0; i < n; i++)
    if (!visited[i])
      dfs(i, adj, order);

  // create adjacency list of G^T
  vector<vector<int>> adj_rev(n);
  for (int v = 0; v < n; v++)
    for (int u : adj[v])
      adj_rev[u].push_back(v);

  visited.assign(n, false);
  reverse(order.begin(), order.end());

  vector<int> roots(n, 0);   // gives the root vertex of a vertex's SCC

  // second series of depth first searches
  for (auto v : order)
    if (!visited[v]) {
      std::vector<int> component;
      dfs(v, adj_rev, component);
      sort(component.begin(), component.end());
      components.push_back(component);
      int root = component.front();
      for (auto u : component)
        roots[u] = root;
    }
}

int main() {
  int n;
  scanf("%d", &n);
  std::vector<int> costs(n);
  for (size_t i = 0; i < n; ++i) {
    scanf("%d", &costs[i]);
  }

  int m;
  scanf("%d", &m);

  vector<vector<int>> adj(n);
  while (m--) {
    int u, v;
    scanf("%d%d", &u, &v);
    assert(0 <= u && u <= n-1);
    assert(0 <= v && v <= n-1);
    adj[u].push_back(v);
  }

  vector<vector<int>> comps;
  strongly_connected_components(adj, comps);

  int64_t modby = 1000000007ll;
  int64_t num_sols = 1;

  size_t total_cost = 0;
  std::vector<size_t> num_min;
  for (auto& comp : comps) {
    int min_cost = std::numeric_limits<int>::max();
    for (auto v : comp) {
      min_cost = std::min(costs[v], min_cost);
    }
    size_t count = 0;
    for (auto v : comp) {
      if (costs[v] == min_cost) {
        ++count;
      }
    }
    num_min.push_back(count);
    total_cost += min_cost;
    num_sols *= count;
    num_sols %= modby;
  }

  std::cout << total_cost << std::endl;
}
