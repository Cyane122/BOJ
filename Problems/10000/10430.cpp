#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 10430 나머지 - https://www.acmicpc.net/problem/10430
 * Tier: Bronze V
 */

using namespace std;

int main() {
    fastio;
    int A, B, C; cin >> A >> B >> C;
    cout << (A+B)%C << endl << ((A%C) + (B%C))%C << endl << (A*B)%C << endl << ((A%C)*(B%C))%C;
    return 0;
}