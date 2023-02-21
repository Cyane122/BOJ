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
 * BOJ 2993 세 부분 - https://www.acmicpc.net/problem/2993
 * Tier: Silver V
 */

int L; string ans, str;

int main() {
    fastio;

    cin >> str; ans = str; L = str.size();

    for(int i = 0; i < L-2; i++) {
        for(int j = i+1; j < L-1; j++) {
            string tmp = str;

            reverse(tmp.begin(), tmp.begin()+1+i);
            reverse(tmp.begin()+i+1, tmp.begin()+j+1);
            reverse(tmp.begin()+j+1, tmp.end());

            ans = min(ans, tmp);
        }
    }

    cout << ans;

    return 0;
}