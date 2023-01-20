#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 5565 영수증 - https://www.acmicpc.net/problem/5565
 * Tier: Bronze III
 */

int main() {
    fastio;
    int N; cin >> N;
    for(int i = 0; i < 9; i++) {
        int k; cin >> k;
        N -= k;
    }
    cout << N;
    return 0;
}