#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10103 주사위 게임 - https://www.acmicpc.net/problem/10103
 * Tier: Bronze III
 */

int main() {
    fastio;
    int A = 100, B = 100, N; cin >> N;
    while(N--) {
        int p, q; cin >> p >> q;
        if(p > q) B -= p;
        else if (p < q) A -= q;
    }
    cout << A << endl << B;
    return 0;
}