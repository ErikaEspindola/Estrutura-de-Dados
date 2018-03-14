#include <bits/stdc++.h>
#define max 10

using namespace std;

int grid[max][max];
int visited[max][max];
using ii = pair <int,int>;
vector<ii> mov = {{1,0},{-1,0},{0,1},{0,-1}};

void bfs (int x, int y)
{
    visited[x][y] = true;
    queue<ii> fila;

    fila.push(ii(x,y));

    while(!fila.empty())
    {
        ii u = fila.front();
        fila.pop();

        for(auto &m: mov)
        {
            int nx = u.first + m.first;
            int ny = u.second + m.second;

            if(!visited[nx][ny] and grid[nx][ny]==0)
            {
                visited[nx][ny] = true;
                fila.push(ii(nx,ny));
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        memset(grid, 1, sizeof(grid));
        memset(visited, false, sizeof(visited));

        for(int i=1; i<=5; i++)
        {
            for(int j=1; j<=5; j++)
            {
                cin >> grid[i][j];
            }
        }
        bfs(1,1);

        printf("%s\n", visited[5][5]? "COPS":"ROBBERS");
    }
}
