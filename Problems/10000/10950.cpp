#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 10950 A+B - 3 - https://www.acmicpc.net/problem/10950
 * Tier: Bronze V
 */

using namespace std;

int main() {
    fastio;

    int T; cin >> T;
    for(int i = 0; i < T; i++) {
        int A, B; cin >> A >> B;
        cout << A+B << endl;
    }

    return 0;
}