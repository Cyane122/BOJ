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
 * BOJ 15720 카우버거 - https://www.acmicpc.net/problem/15720
 * Tier: Silver V
 */

int B, C, D, S = 0; vi a, b, c;

int main() {
    fastio;
    cin >> B >> C >> D;
    wh(B) {
        int k; cin >> k; a.push_back(k); S += k;
    }
    wh(C) {
        int k; cin >> k; b.push_back(k); S += k;
    }
    wh(D) {
        int k; cin >> k; c.push_back(k); S += k;
    }

    cout << S << endl; S = 0;

    sortV(a, greater<int>());
    sortV(b, greater<int>());
    sortV(c, greater<int>());

    fri(max(a.size(), max(b.size(), c.size()))) {
        if(i >= a.size() || i >= b.size() || i >= c.size()) {
            if(i < a.size()) S += a[i];
            if(i < b.size()) S += b[i];
            if(i < c.size()) S += c[i];
        } else {
            S += (a[i] + b[i] + c[i])*9 / 10;
        }
    }
    cout << S;
    return 0;
}