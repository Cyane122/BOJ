#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 15552 빠른 A+B - https://www.acmicpc.net/problem/15552
 * Tier: Bronze IV
 */

using namespace std;

int main() {
    fastio;
    int T; cin >> T;
    for(int i = 0; i < T; i++) {
        int A, B; cin >> A >> B; cout << A+B << endl;
    }
    return 0;
}