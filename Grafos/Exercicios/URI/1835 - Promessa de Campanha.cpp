#include <bits/stdc++.h>
#define max 105
using namespace std;

vector <int> graph[max];
bool visited[max];

void dfs(int v) {
    visited[v]=true;

    for(auto &w: graph[v]) {
        if(not visited[w])
            dfs(w);
    }
}

int main() {
    int M, N, cc=0, teste;
    //M = aresta e N = vértice
    cin >> teste;

    for(int i=0; i<teste; i++) {
        for(int v=0; v<max; v++) {
            graph[v].clear();
            visited[v] = false;
        }
        cc = 0;
        cin >> N >> M;

        for(int i=1; i<=M; i++) {
            int a,b;

            cin >> a >> b;

            graph[a].push_back(b);
            graph[b].push_back(a);
        }


        for(int v=1; v<=N; v++) {
            if(not visited[v]) {
                dfs(v);
                cc++;
            }
        }

        if(cc==1) {
            printf("Caso #%d: a promessa foi cumprida\n", i+1);
        }

        else {
            printf("Caso #%d: ainda falta(m) %d estrada(s)\n",i+1, cc-1);
        }
    }

    return 0;
}
