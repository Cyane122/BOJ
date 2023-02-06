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
 * BOJ 2460 지능형 기차 2 - https://www.acmicpc.net/problem/02460
 * Tier: Bronze III
 */

int A, B, cnt = 0, M = 0;

int main() {
    fastio;
    fri(10) {
        cin >> A >> B; cnt += B; cnt -= A;
        M = max(cnt, M);
    }
    cout << M;
    return 0;
}