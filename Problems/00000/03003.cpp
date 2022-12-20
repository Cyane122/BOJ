#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 3003 킹, 퀸, 룩, 비숍, 나이트, 폰 - https://www.acmicpc.net/problem/3003
 * Tier: Bronze V
 */

using namespace std;

int main() {
    fastio;
    int K, Q, R, B, N, P; cin >> K >> Q >> R >> B >> N >> P;
    cout << 1-K << " " << 1-Q << " " << 2-R << " " << 2-B << " " << 2-N << " " << 8-P;
    return 0;
}