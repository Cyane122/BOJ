#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fri(n) for(int i = 0; i < n; i++)
#define frj(n) for(int j = 0; j < n; j++)
#define frk(n) for(int k = 0; k < n; k++)
#define wh(n) while(n--)
#define vi vector<int>
#define vd vector<double>
#define sortV(v, amp) sort(v.begin(), v.end(), amp)
#define cinV(v, type) type p; cin >> p; v.push_back(p)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vpii vector<pair<int, int>>

using namespace std;

/**
 * BOJ 13565 침투- https://www.acmicpc.net/problem/
 * Tier: Silver II
 */

using namespace std;

int M, N, s[1001][1001]; bool visited[1001][1001];
pii p[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};


int BFS(int x, int y) {
    queue<pii> q;
    q.push({x, y});

    visited[x][y] = true;

    while(!q.empty()) {
        int rx = q.front().first;
        int ry = q.front().second;
        q.pop();

        for(auto i: p) {
            int nx = rx + i.first;
            int ny = ry + i.second;

            if(nx < 0 || ny < 0 || nx >= M || ny >= N) continue;

            if(visited[nx][ny] || s[nx][ny] == 1) continue;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
    for(int i = 0; i < N; i++) {
        if(visited[M-1][i]) return 1;
    }
    return 0;
}

int main() {
    cin >> M >> N;
    fri(M) frj(N) {
        scanf("%1d", &s[i][j]);
    }
    frj(N){
        if(!s[0][j] && !visited[0][j]) {
            if(BFS(0, j)) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}