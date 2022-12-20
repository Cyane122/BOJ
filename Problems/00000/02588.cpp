#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 2588 곱셈 - https://www.acmicpc.net/problem/2588
 * Tier: Bronze III
 */

using namespace std;

int main() {
    fastio;
    int A, B; cin >> A >> B; cout << A*(B%10) << endl << A*((B/10)%10) << endl << A*((B/100)%10) << endl << A*B;
    return 0;
}