# DFS

A busca em profundidade (também conhecido em inglês por Depth-First Search - DFS) é um algoritmo usado para realizar uma busca ou
travessia em árvore, estrutura de árvore ou grafo. Intuitivamente, o algoritmo começa num nó raiz e explora tanto quanto possível
cada um dos seus ramos, antes de retroceder (backtracking).

```c++
#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1024];
bool visited[1024];

void dfs(int u) {
        visited[u] = true;

        for(auto& v : graph[u]) {
                if(not visited[v]) {
                        dfs(v);
                }
        }
}

int main() {
        int n, m;
        cin >> n >> m;

        for(int i = 1; i <= m; ++i) {
                int u, v;
                cin >> u >> v;
                graph[u].push_back(v);
                graph[v].push_back(u);
        }

        for(int u = 1; u <= n; ++u) {
                if(not visited[u]) {
                        dfs(u);
                }
        }

        return 0;
}
```
