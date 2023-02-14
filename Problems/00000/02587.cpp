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
#define cinV(v, type) type p; cin >> p; v.push_back(p);

using namespace std;

/**
 * BOJ 2587 대표값2 - https://www.acmicpc.net/problem/2587
 * Tier: Bronze II
 */

vi v; int S = 0;

int main() {
    fastio;
    fri(5) {
        cinV(v, int);
        S += v[i];
    }
    sortV(v, greater<int>());
    cout << S/5 << endl << v[2];
    return 0;
}