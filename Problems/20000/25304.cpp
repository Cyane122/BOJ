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
 * BOJ 25304 영수증 - https://www.acmicpc.net/problem/영수증
 * Tier: Bronze V
 */

int X, N, A, B;

int main() {
    fastio;
    cin >> X >> N;
    wh(N) {
        cin >> A >> B; X -= A*B;
    }
    if(X == 0) cout << "Yes";
    else cout << "No";
    return 0;
}