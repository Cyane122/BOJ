#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2914 저작권 - https://www.acmicpc.net/problem/2914
 * Tier: Bronze III
 */

int main() {
    fastio;
    int A, I; cin >> A >> I;
    cout << (A * (I-1))+1;
    return 0;
}