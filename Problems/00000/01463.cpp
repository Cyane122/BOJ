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
#define cinV(v, type) type p; cin >> p; v.push_back(p)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vpii vector<pair<int, int>>

using namespace std;

/**
 * BOJ 1463 1로 만들기 - https://www.acmicpc.net/problem/1463
 * Tier: Silver III
 */

int DP[1000001] = {0, 0, 1, 1, 2}, N;

int main() {
    fastio;
    cin >> N;
    for(int i = 2; i <= N; i++) {
        DP[i] = DP[i-1] + 1;
        if(i%2 == 0) DP[i] = min(DP[i], DP[i/2] + 1);
        if(i%3 == 0) DP[i] = min(DP[i], DP[i/3] + 1);
    }

    cout << DP[N];
    return 0;
}