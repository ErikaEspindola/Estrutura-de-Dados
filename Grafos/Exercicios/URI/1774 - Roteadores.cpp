#include <bits/stdc++.h>

using namespace std;

using iii = tuple<int, int, int>;

class union_find {
    public:

    vector<int> parents, rank;

    union_find(int n): parents(n+1), rank(n+1, 0) {
        for(int u = 1; u <= n; ++u)
            parents[u]=u;
    }

    int find_set(int u) {
        return u == parents[u] ? u: (parents[u]=find_set(parents[u]));
    }

    bool same_set(int u, int v) {
        return find_set(u) == find_set(v);
    }

    void union_sets(int u, int v) {
        if(not same_set(u, v)) {
            int x = find_set(u), y = find_set(v);

            if(rank[x] >= rank[y])
                parents[y] = x;
            else
                parents[x] = y;

            if(rank[x] == rank[y])
                ++rank[x];
        }
    }
};

int main() {
    int n, m;
    cin >> m >> n;

    vector<iii> edges;

    for(int i = 1; i <= n; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(iii(w, v, u));
    }

    sort(begin(edges), end(edges));
    union_find ufds(n);
    int mst = 0;

    for(auto &edge: edges) {
        int w, u, v;
        tie(w, u, v) = edge;
        if(not ufds.same_set(u,v)) {
            ufds.union_sets(u, v);
            mst += w;
        }
    }

    cout << mst << endl;

    return 0;
}
