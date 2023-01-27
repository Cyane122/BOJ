#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2921 도미노 - https://www.acmicpc.net/problem/2921
 * Tier: Bronze III
 */

int N;

int main() {
    fastio;
    cin >> N;
    cout << N * (N+1) * (N+2) / 2;
    return 0;
}