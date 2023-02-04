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
 * BOJ 16938 캠프 준비 - https://www.acmicpc.net/problem/16938
 * Tier: Gold V
 */

int N, L, R, X, S = 0, cnt = 0; vi v, r;

void DFS(int i) {
    if(S <= R && S >= L && abs(r[r.size()-1]-r[0]) >= X && r.size() >= 2) {
        cnt++;
    }
    for(int j = i+1; j < v.size(); j++) {
        r.push_back(v[j]);
        S += v[j];
        DFS(j);
        r.pop_back();
        S -= v[j];
    }
}

int main() {
    fastio;
    cin >> N >> L >> R >> X;
    wh(N) {
        int k; cin >> k; v.push_back(k);
    }
    sortV(v, greater<>());
    DFS(-1);
    cout << cnt;
    return 0;
}