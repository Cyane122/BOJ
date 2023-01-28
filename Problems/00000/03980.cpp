#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 3980 선발 명단 - https://www.acmicpc.net/problem/3980
 * Tier: Gold V
 */

int T, arr[11][11], M = 0, S = 0; bool used[11];

void DFS(int n) {
    if(n == 11) {
        M = max(M, S);
        return;
    } else {
        for(int i = 0; i < 11; i++) {
            if(!used[i] && arr[i][n] != 0) {
                used[i] = true;
                S += arr[i][n];
                DFS(n+1);
                S -= arr[i][n];
                used[i] = false;
            }
        }
    }
}

int main() {
    fastio;
    cin >> T;
    while(T--) {
        for(auto & i : arr) {
            for(int & j : i) {
                cin >> j;
            }
        }
        DFS(0);
        cout << M << endl;
        M = 0;
        S = 0;
    }
    return 0;
}