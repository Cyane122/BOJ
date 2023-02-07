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
 * BOJ 10807 개수 세기 - https://www.acmicpc.net/problem/10807
 * Tier: Bronze V
 */

int cnt[201], N, V;

int main() {
    fastio;
    cin >> N;
    wh(N) {
        int k; cin >> k; cnt[k+100]++;
    }
    cin >> V;
    cout << cnt[V+100];
    return 0;
}