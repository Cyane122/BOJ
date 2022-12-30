#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 5717 상근이의 친구들 - https://www.acmicpc.net/problem/5717
 * Tier: Bronze IV
 */

int main() {
    fastio;
    while(true) {
        int A, B; cin >> A >> B;
        if(A == 0 && B == 0) break;
        cout << A + B << endl;
    }
    return 0;
}