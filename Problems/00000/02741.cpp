#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2741 N 찍기 - https://www.acmicpc.net/problem/2741
 * Tier: Bronze V
 */

int N;

int main() {
    fastio;
    cin >> N;
    for(int i = 1; i <= N; i++) cout << i << endl;
    return 0;
}