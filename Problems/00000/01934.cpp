#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1934 최소공배수 - https://www.acmicpc.net/problem/1934
 * Tier: Bronze 1
 */

using namespace std;

int gcd(int a, int b) {
    int M = max(a, b);
    int m = min(a, b);
    if(M%m == 0) return m;
    else return gcd(m, M%m);
}

int main() {
    fastio;

    int T; cin >> T;
    for(int i = 0; i < T; i++) {
        int A, B; cin >> A >> B;
        cout << (A*B)/gcd(A, B) << endl;
    }

    return 0;
}