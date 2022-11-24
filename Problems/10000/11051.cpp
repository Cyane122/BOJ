#include <bits/stdc++.h>
/**
 * #11052 이항계수2 https://www.acmicpc.net/problem/11051
 */
// 시간초과!
using namespace std;

int nCr(int n, int r) {
    if(r == 1 || r == n) return 1;
    else return (nCr(n-1, r-1) + nCr(n-1, r))%10007;
}

int main() {
    int N, K; cin >> N >> K;
    cout << nCr(N, K);
}