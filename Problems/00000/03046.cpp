#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 3046 R2 - https://www.acmicpc.net/problem/3046
 * Tier: Bronze IV
 */

int main() {
    fastio;
    int R, S; cin >> R >> S;
    cout << 2*S - R;
    return 0;
}