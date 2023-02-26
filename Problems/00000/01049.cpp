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
 * BOJ 1049 기타줄 - https://www.acmicpc.net/problem/1049
 * Tier: Silver IV
 */

int N, M, S[50], O[50], sum, line;

int main() {
    fastio;
    cin >> N >> M;
    fri(M) cin >> S[i] >> O[i];
    sort(S, S+M);
    sort(O, O+M);
    sum = 0;
    line = N;
    while(line > 0) {
        if(line >= 6) {
            if(S[0] > O[0]*6) {
                sum += O[0]*line;
                line -= line;
            } else {
                sum += S[0];
                line -= 6;
            }
        } else {
            if(S[0] < O[0]*line) {
                sum += S[0];
                line -= 6;
            } else {
                sum += O[0]*line;
                line -= line;
            }
        }
    }
    cout << sum;
    return 0;
}