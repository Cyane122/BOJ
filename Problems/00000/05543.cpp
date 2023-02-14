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

using namespace std;

/**
 * BOJ 5543 상근날드 - https://www.acmicpc.net/problem/5543
 * Tier: Bronze IV
 */

vi v1, v2;

int main() {
    fastio;
    fri(3) {
        cinV(v1, int);
    }
    fri(2) {
        cinV(v2, int);
    }
    sortV(v1, less<int>());
    sortV(v2, less<int>());
    cout << v1[0]+v2[0]-50;
    return 0;
}