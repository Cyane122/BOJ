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
 * BOJ 1051 숫자 정사각형 - https://www.acmicpc.net/problem/1051
 * Tier: Silver IV
 */

int N, M, m = 0; string s[51];

int main() {
    fastio;
    cin >> N >> M;
    fri(N) {
        cin >> s[i];
    }
    for(int k = 0; k < max(N, M); k++) {
        fri(N) frj(M) {
            if(k+i > N || k+j > M) continue;
            if(s[i][j] == s[i][j+k] && s[i+k][j] == s[i][j+k] && s[i+k][j] == s[i+k][j+k]) m = max(m, (k+1)*(k+1));
        }
    }
    cout << m;
    return 0;
}