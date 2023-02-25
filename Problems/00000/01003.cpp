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
 * BOJ 1003 피보나치 함수 - https://www.acmicpc.net/problem/1003
 * Tier: Silver III
 */

int T, N, DP[41] = {0, 1, 1};

int main() {
    fastio;
    cin >> T;
    wh(T) {
        cin >> N;
        if(N == 0) cout << "1 0" << endl;
        else {
            for(int i = 2; i <= N; i++) {
                DP[i] = DP[i-1] + DP[i-2];
            }
            cout << DP[N-1] << " " << DP[N] << endl;
        }

    }
    return 0;
}