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
 * BOJ 15989 1, 2, 3 더하기 - https://www.acmicpc.net/problem/15989
 * Tier: Silver I
 */

using namespace std;

int M = 0, T, DP[10001] = {}; vi v;

int main() {
    fastio;
    cin >> T;
    wh(T) {
        int k; cin >> k; M = max(k, M); v.push_back(k);
    }
    DP[0] = 1;
    fri(4) frj(M+1) {
        if(j < i) continue;
        DP[j] += DP[j-i];
    }
    for(auto i: v) cout << DP[i]/2 << endl;
    return 0;
}