#include <bits/stdc++.h>
/**
 * #10870 피보나치 수열
 */
using namespace std;

int pibo(int N) {
    if(N == 0) return 0;
    else if (N == 1) return 1;
    else return pibo(N-2) + pibo(N-1);
}

int main() {
    int N; cin >> N;
    cout << pibo(N);
    return 0;
}