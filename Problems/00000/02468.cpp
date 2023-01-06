#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2468 안전 영역 - https://www.acmicpc.net/problem/2468
 * Tier: Silver I
 */

int area[101][101], N, R = 0, M = 0, H = 1, res = 0; bool visited[101][101];
pair<int, int> d[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void DFS(int x, int y) {
    visited[x][y] = true;
    for(auto i: d) {
        int nx = x + i.first;
        int ny = y + i.second;
        if(nx >= 0 && ny >= 0 && nx < N && ny < N && !visited[nx][ny] && area[nx][ny] > H) DFS(nx, ny);
    }
}

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> area[i][j];
            M = max(area[i][j], M);
        }
    }
    for(int i = 0; i <= M; i++) {
        H = i;
        for(int x = 0; x < N; x++) {
            for(int y = 0; y < N; y++) {
                if(area[x][y] > H && !visited[x][y]) {
                    DFS(x, y);
                    R++;
                }
            }
        }
        res = max(R, res);
        R = 0;
        for(int x = 0; x < N; x++) {
            for(int y = 0; y < N; y++) {
                visited[x][y] = false;
            }
        }
    }
    cout << ((res == 0)?1:res);
    return 0;
}