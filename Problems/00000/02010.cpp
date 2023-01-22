#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2010 플러그 - https://www.acmicpc.net/problem/2010
 * Tier: Bronze III
 */

int S = 0, A, N;

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A;
        S += A;
    }
    cout << S - (N-1);
    return 0;
}