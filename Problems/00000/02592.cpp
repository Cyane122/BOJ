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
 * BOJ 2592 대표값 - https://www.acmicpc.net/problem/2592
 * Tier: Bronze II
 */

int N, S = 0, cnt = 0, arr[101], M = 0;

int main() {
    fastio;
    fri(10) {
        cin >> N;
        arr[N/10]++;
        S += N;
    }
    fri(100) {
        if(cnt < arr[i]) {
            cnt = arr[i];
            M = i*10;
        }
    }
    cout << S/10 << endl << M;
    return 0;
}