#include <bits/stdc++.h>
/**
 * #24416 알고리즘 수업 - https://www.acmicpc.net/problem/24416
 */
using namespace std;

int F[41];

int A = 0, B = 0;

int fib(int n) {
    A++;
    if(n == 1 || n == 2) return 1;
    else return fib(n-1) + fib(n-2);
}

int fibonacci(int n) {
    B++;
    if(n == 1 || n == 2) F[n] = 1;
    else {
        for(int i = 3; i < n; i++) {
            F[i] = F[i-1] + F[i-2];
            B++;
        }

    }

    return F[n];
}

int main() {
    int P;
    cin >> P;
    fib(P);
    fibonacci(P);
    cout << A << " " << B;

    return 0;
}