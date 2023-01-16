#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2742 기찍 N - https://www.acmicpc.net/problem/2742
 * Tier: Bronze IV
 */

int N;

int main() {
    fastio;
    cin >> N;
    for(int i = N; i >= 1; i--) cout << i << endl;
    return 0;
}