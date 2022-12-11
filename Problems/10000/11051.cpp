#include <bits/stdc++.h>
/**
 * #11052 이항계수2 https://www.acmicpc.net/problem/11051
 */
// 시간초과!
using namespace std;

int pascal[1001][1001] = {};

int nCr(int n, int r) {
    int res;
    if(r == 1 || r == n) res = 1;
    else {
        if(pascal[n][r] > 0) res = pascal[n][r];
        else {
            pascal[n][r] = (nCr(n-1, r-1) + nCr(n-1, r))%10007;
            res = pascal[n][r];
        }
    }

    return res;
}

int main() {
    int N, K; cin >> N >> K;
    cout << nCr(N, K);
}