#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 2609 최대공약수와 최소공배수 - https://www.acmicpc.net/problem/2609
 * Tier: Bronze 1
 */

using namespace std;

int gcd(int a, int b) {
    int M = max(a, b);
    int m = min(a, b);
    if(M%m == 0) return m;
    else {
        return gcd(m, M%m);
    }
}

int main() {
    fastio;

    int A, B; cin >> A >> B;
    cout << gcd(A, B) << endl << (A*B)/gcd(A, B);

    return 0;
}