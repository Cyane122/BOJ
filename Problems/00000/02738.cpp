#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 2738 행렬 덧셈 - https://www.acmicpc.net/problem/2738
 * Tier: Bronze 5
 */

using namespace std;

int matrix1[101][101];
int matrix2[101][101];

int main() {
    fastio;

    int N, M; cin >> N >> M;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> matrix1[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> matrix2[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}