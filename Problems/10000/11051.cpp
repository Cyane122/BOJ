#include <bits/stdc++.h>
/**
 * #11052 이항계수2 https://www.acmicpc.net/problem/11051
 * Tier: Silver 2
 */

using namespace std;

int arr[1001][1001] = {};

int nCr(int n, int r) {
    if(n == 0 || r == 0 || r == n) {
        arr[n][r] = 1;
        return 1;
    } else if (arr[n][r] != 0) return arr[n][r];
    else {
        arr[n][r] = (nCr(n-1, r-1) + nCr(n-1, r))%10007;
        return arr[n][r];
    }
}

int main() {
    int N, K; cin >> N >> K;
    cout << nCr(N, K);
}