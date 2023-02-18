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
 * BOJ 2156 포도주 시식 - https://www.acmicpc.net/problem/2156
 * Tier: Silver I
 */

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
 * BOJ 2156 포도주 시식 - https://www.acmicpc.net/problem/2156
 * Tier: Silver I
 */

int N, d[10001], p[10001];

void solve() {
    d[1] = p[1], d[2] = p[1] + p[2];
    for (int i = 3; i <= N; i++) {
        d[i] = d[i-1];
        d[i] = max(d[i], d[i-2]+p[i]);
        d[i] = max(d[i], d[i-3]+p[i-1]+p[i]);
    }
    cout << d[N];
}

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> p[i];
    solve();
    return 0;
}