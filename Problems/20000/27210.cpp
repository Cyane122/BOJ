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
 * BOJ 27210 신을 모시는 사당 - https://www.acmicpc.net/problem/27210
 * Tier: Gold III
 */

int N, M, LMAX = 0, RMAX = 0, TMAX = 0;

int main() {
    fastio;
    cin >> N;
    int i = -1;
    while(++i < N) {
        cin >> M;
        M == 1 ? LMAX++:LMAX--;
        M == 2 ? RMAX++:RMAX--;
        if(LMAX > TMAX || RMAX > TMAX) {
            TMAX = max(LMAX, RMAX);
        }
        if(LMAX < 0) LMAX = 0;
        if(RMAX < 0) RMAX = 0;
    }
    cout << TMAX;
    return 0;
}