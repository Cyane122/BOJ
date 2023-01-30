#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2475 검증수 - https://www.acmicpc.net/problem/2475
 * Tier: Bronze V
 */

int main() {
    fastio;
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    cout << ((int)(pow(A, 2) + pow(B, 2) + pow(C, 2) + pow(D, 2) + pow(E, 2)))%10 << endl;
    return 0;
}