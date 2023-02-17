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
 * BOJ 12865 평범한 배낭 - https://www.acmicpc.net/problem/12865
 * Tier: Gold V
 */

int N, K, W = 0, V = 0, M = 0, arr[101][100001]; pii p[101];

int main() {
    fastio;
    cin >> N >> K;
    for(int i = 1; i <= N; i++) {
        cin >> p[i].first >> p[i].second;
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 0; j <= K; j++) {
            arr[i][j] = arr[i-1][j];
            if(p[i].first <= j) arr[i][j] = max(p[i].second + arr[i-1][j-p[i].first], arr[i][j]);
        }
    }
    cout << arr[N][K];
    return 0;
}