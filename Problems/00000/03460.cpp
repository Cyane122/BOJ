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
 * BOJ 3460 이진수 - https://www.acmicpc.net/problem/3460
 * Tier: Bronze III
 */

int T, N;

int main() {
    fastio;
    cin >> T;
    wh(T) {
        cin >> N;
        int idx = 0;
        while(N > 0) {
            if (N % 2 == 1) cout << idx << " ";
            idx++;
            N /= 2;
        }
        cout << endl;
    }
    return 0;
}