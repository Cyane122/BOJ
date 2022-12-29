#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2480 주사위 세개 - https://www.acmicpc.net/problem/2480
 * Tier: Bronze IV
 */

int main() {
    fastio;
    int A, B, C; cin >> A >> B >> C;
    if(A == B && B == C) {
        cout << 10000 + A*1000;
    } else if (A == B || B == C || C == A) {
        if(A == B) cout << 1000 + A*100;
        else if (B == C) cout << 1000 + B*100;
        else cout << 1000 + C*100;
    } else {
        cout << max(A, max(B, C))*100;
    }
    return 0;
}