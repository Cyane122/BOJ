#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 11022 A+B - 8 - https://www.acmicpc.net/problem/11022
 * Tier: Bronze V
 */

int main() {
    fastio;
    int T; cin >> T;
    for(int i = 1; i <= T; i++) {
        int A, B; cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A+B << endl;
    }
    return 0;
}