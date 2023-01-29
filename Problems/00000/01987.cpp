#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1987 알파벳 - https://www.acmicpc.net/problem/1987
 * Tier: Gold IV
 */

bool used[27]; char c[21][21]; int R, C, r = 1, M = 0; pair<int, int> p[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void DFS(int x, int y) {
    M = max(r, M);
    for(auto i: p) {
        int nx = x + i.first;
        int ny = y + i.second;
        if(nx >= 0 && ny >= 0 && nx < R && ny < C) {
            char c1 = c[nx][ny];
            if(!used[c1 - 'A']) {
                used[c1 - 'A'] = true;
                r++;
                DFS(nx, ny);
                r--;
                used[c1 - 'A'] = false;
            }
        }
    }
}

int main() {
    fastio;
    cin >> R >> C;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) cin >> c[i][j];
    }
    used[c[0][0] - 'A'] = true;
    DFS(0, 0);
    cout << M;
    return 0;
}
