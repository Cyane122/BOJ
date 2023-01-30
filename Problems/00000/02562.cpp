#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2562 최댓값 - https://www.acmicpc.net/problem/2562
 * Tier: Bronze III
 */

int N = 0, M;

int main() {
    fastio;
    for(int i = 0; i < 9; i++) {
        int k; cin >> k;
        if(N < k) {
            N = k;
            M = i+1;
        }
    }
    cout << N << endl << M;
    return 0;
}