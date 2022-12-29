#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2476 주사위 게임 - https://www.acmicpc.net/problem/2476
 * Tier: Bronze III
 */

int main() {
    fastio;
    int A, B, C, T, m = 0; cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> A >> B >> C;
        if(A == B && B == C) {
            m = max(10000 + A*1000, m);
        } else if (A == B || B == C || C == A) {
            if(A == B) m = max(m, 1000 + A*100);
            else if (B == C) m = max(m, 1000 + B*100);
            else m = max(m, 1000 + C*100);
        } else {
            m = max(m, max(A, max(B, C))*100);
        }
    }
    cout << m;
    return 0;
}