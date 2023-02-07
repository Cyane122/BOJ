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
 * BOJ 3052 나머지 - https://www.acmicpc.net/problem/3052
 * Tier: Bronze II
 */

bool l[42]; int N, cnt = 0;

int main() {
    fastio;
    fri(10) {
        cin >> N;
        if(!l[N%42]) {
            cnt++;
            l[N%42] = true;
        }
    }
    cout << cnt;
    return 0;
}