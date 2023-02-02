#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fri(n) for(int i = 0; i < n; i++)
#define frj(n) for(int j = 0; j < n; j++)
#define frk(n) for(int k = 0; k < n; k++)
#define wh(n) while(n--)
#define vi vector<int>
#define vd vector<double>
#define sortV(v, amp) sort(v.begin(), v.end(), amp)

using namespace std;

/**
 * BOJ 14651 걷다보니 신천역 삼 (Large) - https://www.acmicpc.net/problem/14651
 * Tier: Silver I
 */

long long int N, DP[33334];

int main() {
    fastio;
    cin >> N;
    DP[2] = 2;
    for(int i = 3; i <= N; i++) DP[i] = (DP[i-1]*3)%1000000009;
    cout << DP[N];
    return 0;
}