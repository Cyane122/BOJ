#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2576 홀수 - https://www.acmicpc.net/problem/2576
 * Tier: Bronze III
 */

int S = 0, m = 101;

int main() {
    fastio;
    for(int i = 0; i < 7; i++) {
        int k; cin >> k;
        if(k%2 == 1) {
            S += k;
            m = min(m, k);
        }
    }
    if(S == 0) cout << -1;
    else {
        cout << S << endl << m;
    }
    return 0;
}