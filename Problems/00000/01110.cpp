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
 * BOJ 1110 더하기 사이클 - https://www.acmicpc.net/problem/1110
 * Tier: Bronze I
 */

int N, NN, cnt = 0, A, B;

int main() {
    fastio;
    cin >> N; NN = N;
    while(true) {
        A = NN/10; B = NN%10;
        int C = A+B;
        NN = 10*B + (C%10);
        cnt++;
        if(NN == N) {
            cout << cnt;
            return 0;
        }
    }
    return 0;
}