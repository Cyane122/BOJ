#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 9085 더하기 - https://www.acmicpc.net/problem/9085
 * Tier: Bronze III
 */

int T, N, S = 0;

int main() {
    fastio;
    cin >> T;
    while(T--) {
        cin >> N;
        while(N--) {
            int k; cin >> k; S += k;
        }
        cout << S << endl;
        S = 0;
    }
    return 0;
}