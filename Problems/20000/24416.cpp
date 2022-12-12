#include <bits/stdc++.h>
/**
 * #24416 알고리즘 수업 - https://www.acmicpc.net/problem/24416
 *
 */
using namespace std;

int fib(int n) {
    if(n == 1 || n == 2) return 1;
    else return fib(n-1) + fib(n-2);
}

int main() {
    int P;
    cin >> P;
    cout << fib(P) << " " << P-2;

    return 0;
}