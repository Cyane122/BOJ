#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1018 체스판 다시 칠하기 - https://www.acmicpc.net/problem/1018
 * Tier: Silver IV
 */

using namespace std;

string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

string board[51];

int cnt(int x, int y) {
    int cnt = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(board[x+i][y+j] != BW[i][j]) cnt++;
        }
    }

    return cnt;
}

int main() {
    fastio;
    int M, N, res = 10000; cin >> M >> N;
    for(int i = 0; i < M; i++) cin >> board[i];

    for(int i = 0; i + 8 <= M; i++) {
        for(int j = 0; j + 8 <= N; j++) {
            int t = cnt(i, j);
            if(t >= 32) t = 64-t;
            if(t < res) res = t;
        }
    }

    cout << res;
    return 0;
}