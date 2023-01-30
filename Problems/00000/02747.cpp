#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2747 피보나치 수 - https://www.acmicpc.net/problem/2748
 * Tier: Bronze II
 */

long long int DP[92] = {0, 1, 1}, N;

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i <= N; i++) DP[i+2] = DP[i+1] + DP[i];
    cout << DP[N];
    return 0;
}