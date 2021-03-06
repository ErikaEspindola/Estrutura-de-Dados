# BFS

A busca em largura (também conhecido em inglês por Breadth-First Search - BFS) é um algoritmo de busca em grafos utilizado
para realizar uma busca ou travessia num grafo e estrutura de dados do tipo árvore. 
Intuitivamente, você começa pelo vértice raiz e explora todos os vértices vizinhos. Então, para cada um desses vértices mais
próximos, exploramos os seus vértices vizinhos inexplorados e assim por diante, até que ele encontre o alvo da busca.

```c++
#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;

vector<int> graph[1024], dist(1024);

void bfs(int source) {
        queue<int> q;
        fill(dist.begin(), dist.end(), oo);
        dist[source] = 0;
        q.push(source);

        while(not q.empty()) {
                int u = q.front(); q.pop();

                for(auto& v : graph[u]) {
                        if(dist[v] == oo) {
                                dist[v] = dist[u] + 1;
                                q.push(v);
                        }
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
                if(dist[u] == oo) {
                        bfs(u);
                }
        }

        return 0;
}
```
