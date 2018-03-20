#include <bits/stdc++.h>
using namespace std;

class union_find {
    public:
    vector<int> parents, Rank, pontos;

    union_find(int n): parents(n+1), Rank(n+1, 0), pontos(n+1) {
        for(int u = 1; u <= n; ++u)
            parents[u] = u;
    }

    int find_set(int u) {
        return u == parents[u]? u: (parents[u]=find_set(parents[u]));
    }

    bool same_set(int u, int v) {
        return find_set(u) == find_set(v);
    }

    void union_sets(int u, int v) {
        if(not same_set(u, v)) {
            int x = find_set(u), y = find_set(v);

            if(Rank[x] >= Rank[y]) {
                parents[y] = x;
                pontos[x] += pontos[y];
            }
            else {
                parents[x] = y;
                pontos[y] += pontos[x];
            }
            if(Rank[x]==Rank[y])
                ++Rank[x];
        }
    }
};

int main() {
    int n, m;

    while(cin >> n >> m && n != 0 && m != 0) {
        int ponto = 0;
        int q, a, b;
        
        union_find guild(n);
        
        for(int i=1; i<=n;i++) {
            cin >> guild.pontos[i];
        }

        for(int i = 0; i < m; i++) {
            cin >> q >> a >> b;
            
            if(q == 1) {
                guild.union_sets(a, b);
            }
            else {
                if(guild.pontos[guild.find_set(a)] > guild.pontos[guild.find_set(b)]){
                    if(guild.same_set(a, 1))
                        ponto++;
                }
                if(guild.pontos[guild.find_set(a)] < guild.pontos[guild.find_set(b)]){
                    if(guild.same_set(b, 1))
                        ponto++;
                }
            }
         }
         cout << ponto << endl;
    }

    return 0;
}
