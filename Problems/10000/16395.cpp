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
 * BOJ 16395 파스칼의 삼각형 - https://www.acmicpc.net/problem/16395
 * Tier: Silver V
 */

int pascal[53][53], N, K;

int main() {
    fastio;
    cin >> N >> K;
    for(int i = 1; i <= N; i++) {
        pascal[i][1] = 1;
        pascal[i][i] = 1;
    }
    for(int i = 2; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }
    cout << pascal[N][K];
    return 0;
}