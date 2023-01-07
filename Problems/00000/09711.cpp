#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 9711 피보나치 - https://www.acmicpc.net/problem/9711
 * Tier: Silver III
 */

int P, Q, T;
long long int dp[10002] = {0, 1, 1};


int main() {
    fastio;
    cin >> T;
    for(int j = 1; j <= T; j++) {
        cin >> P >> Q;
        if (Q == 1) {
            cout << "Case #" << j << ": " << 0 << endl;
            continue;
        }
        for(int i = 2; i <= P; i++) {
            dp[i] = (dp[i-1] + dp[i-2])%Q;
        }
        cout << "Case #" << j << ": " << dp[P] << endl;
    }
    return 0;
}