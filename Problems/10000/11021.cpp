#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 11021 A+B - 7 - https://www.acmicpc.net/problem/11021
 * Tier: Bronze V
 */

int main() {
    fastio;
    int T; cin >> T;
    for(int i = 0; i < T; i++) {
        int A, B; cin >> A >> B;
        cout << "Case #" << i+1 << ": " << A+B << endl;
    }
    return 0;
}