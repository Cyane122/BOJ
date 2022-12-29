#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10156 과자 - https://www.acmicpc.net/problem/10156
 * Tier: Bronze IV
 */

int main() {
    fastio;
    int A, B, C; cin >> A >> B >> C;
    cout << ((A*B - C > 0)? A*B - C:0);
    return 0;
}