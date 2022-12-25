#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10026 적록색약 - https://www.acmicpc.net/problem/10026
 * Tier: Gold V
 */

char paint[101][101]; bool visited[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int N, YS = 0, NS = 0;

void DFS(int x, int y) {
    if(visited[x][y]) return;

    visited[x][y] = true;

    for(int i = 0; i < 4; i++) {
        int p = x + dx[i];
        int q = y + dy[i];

        if(p < 0 || q < 0 || p >= N || q >= N) continue;
        else if(paint[p][q] == paint[x][y]) DFS(p, q);
    }
}

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> paint[i][j];
            visited[i][j] = false;
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(!visited[i][j]) {
                DFS(i, j);
                NS++;
            }
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            visited[i][j] = false;
            if(paint[i][j] == 'R') paint[i][j] = 'G';
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(!visited[i][j]) {
                DFS(i, j);
                YS++;
            }
        }
    }

    cout << NS << " " << YS;
    return 0;
}