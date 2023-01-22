#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 9325 얼마? - https://www.acmicpc.net/problem/9325
 * Tier: Bronze III
 */

int T, S, N, s = 0, p, q;

int main() {
    fastio;
    cin >> T;
    while(T--) {
        cin >> S >> N;
        s = S;
        while(N--) {
            cin >> q >> p;
            s += p*q;
        }
        cout << s << endl;
    }
    return 0;
}