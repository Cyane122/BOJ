#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1012 유기농 배추 - https://www.acmicpc.net/problem/1012
 * Tier: Silver II
 */

bool visited[56][56];
int farm[56][56];
int T, X, Y, K, m;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void DFS(int i, int j) {
    if(visited[i][j] || i == X || j == Y || i < 0 || j < 0) return;
    visited[i][j] = true;
    for(int k = 0; k < 4; k++) {
        int x = i + dx[k];
        int y = j + dy[k];
        if(x < 0 || y < 0 || x > X || y > Y) continue;

        if(farm[x][y] == 1 && !visited[x][y]) DFS(x, y);
    }
    return;
}

int main() {
    fastio;
    cin >> T;
    while(T--) {
        m = 0;
        cin >> X >> Y >> K;
        for(int i = 0; i < X; i++) {
            fill(visited[i], visited[i]+Y, false);
            fill(farm[i], farm[i]+Y, 0);
        }
        for(int i = 0; i < K; i++) {
            int A, B; cin >> A >> B;
            farm[A][B] = 1;
        }
        for(int i = 0; i < X; i++) {
            for(int j = 0; j < Y; j++) {
                if (farm[i][j] == 1 && !visited[i][j]) {
                    m++;
                    DFS(i, j);
                }
            }
        }
        cout << m << endl;
    }
    return 0;
}