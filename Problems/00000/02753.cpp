#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 2753 윤년 - https://www.acmicpc.net/problem/2753
 * Tier: Bronze V
 */

using namespace std;

int main() {
    fastio;
    int A; cin >> A;
    cout << (((A%4 == 0 && A%100 != 0) || A%400 == 0)?1:0);
    return 0;
}