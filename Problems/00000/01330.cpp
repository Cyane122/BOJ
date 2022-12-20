#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1330 두 수 비교하기 - https://www.acmicpc.net/problem/1330
 * Tier: Bronze V
 */

using namespace std;

int main() {
    fastio;
    int A, B; cin >> A >> B;
    cout << ((A>B)?">":((A<B)?"<":"=="));
    return 0;
}