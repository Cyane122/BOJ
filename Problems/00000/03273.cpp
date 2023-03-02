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
 * BOJ 3273 두 수의 합 - https://www.acmicpc.net/problem/3273
 * Tier: Silver III
 */

using namespace std;

int N, X, cnt, f = 0, e; vi v;

int main() {
    fastio;
    cin >> N;
    fri(N) {
        cinV(v, int);
    }
    cin >> X;
    e = N-1;
    sortV(v, less<int>());
    for(int first = 0, end = N-1; first != end;) {
        if(v[first] + v[end] == X) {
            cnt++;
            first++;
        }
        else if (v[first] + v[end] > X) end--;
        else first++;
    }

    cout << cnt;
    return 0;
}