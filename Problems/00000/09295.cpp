#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 9295 주사위 - https://www.acmicpc.net/problem/9295
 * Tier: Bronze III
 */

int T, A, B;

int main() {
    fastio;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        cin >> A >> B;
        cout << "Case " << i << ": " << A+B << endl;
    }
    return 0;
}