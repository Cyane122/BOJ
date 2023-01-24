#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10871 X보다 작은 수 - https://www.acmicpc.net/problem/10871
 * Tier: Bronze V
 */

int N, K;

int main() {
    fastio;
    cin >> N >> K;
    while(N--) {
        int t; cin >> t;
        if(t < K) cout << t << " ";
    }
    return 0;
}