#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1735 분수 합 - https://www.acmicpc.net/problem/1735
 * Tier: Silver III
 */

int A, B, C, D, P, Q;

int main() {
    fastio;
    cin >> A >> B >> C >> D;
    P = A*D + B*C; Q = B*D;
    for(int i = 2; i <= min(P, Q); i++) {
        if(P%i == 0 && Q%i == 0) {
            do {
                P /= i;
                Q /= i;
            } while(P%i == 0 && Q%i == 0);
        }
    }
    cout << P << " " << Q;
    return 0;
}