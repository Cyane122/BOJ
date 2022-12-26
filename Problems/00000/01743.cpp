#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1743 음식물 피하기 - https://www.acmicpc.net/problem/1743
 * Tier: Silver I
 */

bool flo[101][101], visited[101][101];
int N, M, K, R, C, m = 0, t = 0;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void DFS(int x, int y) {
    if(visited[x][y]) return;
    visited[x][y] = true;
    for(int i = 0; i < 4; i++) {
        int X = x + dx[i];
        int Y = y + dy[i];
        if(X < 0 || Y < 0 || X >= N || Y >= M) continue;
        if(!visited[X][Y] && flo[X][Y] && flo[x][y]) {
            t++;
            DFS(X, Y);
        }
    }
}

int main() {
    fastio;
    cin >> N >> M >> K;
    for(int i = 0; i < N; i++) {
        fill(flo[i], flo[i] + M, false);
        fill(visited[i], visited[i] + M, false);
    }
    for(int i = 0; i < K; i++) {
        cin >> R >> C;
        flo[R-1][C-1] = true;
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(!visited[i][j] && flo[i][j]) {
                t = 0;
                DFS(i, j);
            }
            m = max(m, t);
        }
    }
    cout << m+1;
    return 0;
}