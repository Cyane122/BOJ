#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2559 수열 - https://www.acmicpc.net/problem/2559
 * Tier: Silver III
 */

int tem[100001];

int main() {
    fastio;
    int N, K, M = -10000001, sum = 0; cin >> N >> K;
    for(int i = 0; i < N; i++) cin >> tem[i];
    for(int i = 0; i < K; i++) {
        sum += tem[i];
    }
    M = max(sum, M);
    for(int i = K; i < N; i++) {
        sum -= tem[i-K];
        sum += tem[i];
        M = max(sum, M);
    }

    cout << M;
    return 0;
}