#include <bits/stdc++.h>
/**
 * #11050 이항계수1 https://www.acmicpc.net/problem/11050
 */

using namespace std;

int factorial(int n, int c) {
    if(n == 1 || c == 0) return 1;
    else return n * factorial(n-1, c-1);
}

int main() {
    int N, K; cin >> N >> K;
    cout << factorial(N, K)/ factorial(K, K);
}