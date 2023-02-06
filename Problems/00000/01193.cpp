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
 * BOJ 1193 분수찾기 - https://www.acmicpc.net/problem/1193
 * Tier: Silver V
 */

int N, K = 1;

int main() {
    fastio;
    cin >> N;
    while(N > K) {
        N -= K;
        K++;
    }
    if(K%2 == 1) cout << K+1-N << "/" << N << endl;
    else cout << N << "/" << K+1-N << endl;
    return 0;
}