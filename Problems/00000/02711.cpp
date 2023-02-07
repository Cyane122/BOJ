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
 * BOJ 2711 오타맨 고창영 - https://www.acmicpc.net/problem/2711
 * Tier: Bronze II
 */

int N, K; string s;

int main() {
    fastio;
    cin >> N;
    wh(N) {
        cin >> K >> s;
        fri(s.size()) {
            if(i == K-1) continue;
            else cout << s[i];
        }
        cout << endl;
    }
    return 0;
}