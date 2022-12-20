#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 10869 사칙연산 - https://www.acmicpc.net/problem/10869
 * Tier: Bronze V
 */

using namespace std;

int main() {
    fastio;

    int A, B; cin >> A >> B; cout << A+B << endl << A-B << endl << A*B << endl << A/B << endl << A%B;

    return 0;
}