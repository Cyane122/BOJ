#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2163 초콜릿 자르기 - https://www.acmicpc.net/problem/2163
 * Tier: Bronze I
 */

int main() {
    fastio;
    int N, M; cin >> N >> M;
    cout << min((N-1) + N*(M-1), M-1 + M*(N-1));
    return 0;
}