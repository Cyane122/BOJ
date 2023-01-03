#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2178 미로 탐색 - https://www.acmicpc.net/problem/2178
 * Tier: Silver I
 */

int N, M;
string maze[101];
int dis[101][101];
queue<pair<int, int>> q;
pair<int, int> d[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int main() {
    fastio;
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        cin >> maze[i];
    }
    q.emplace(0, 0);
    while(!q.empty()) {
        pair <int, int> n = q.front();
        q.pop();
        for(auto & i : d) {
            int x = n.first + i.first;
            int y = n.second + i.second;
            if(x >= 0 && x < N && y >= 0 && y < M) {
                if(dis[x][y] == 0 && maze[x][y] == '1') {
                    dis[x][y] = dis[n.first][n.second] + 1;
                    q.emplace(x, y);
                }
            }
        }
    }

    cout << dis[N-1][M-1] + 1;
    return 0;
}