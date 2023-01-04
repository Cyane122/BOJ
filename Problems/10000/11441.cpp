#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 11441 합 구하기 - https://www.acmicpc.net/problem/11441
 * Tier: Silver III
 */

int N, M, arr[100003];

int main() {
    fastio;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        int k; cin >> k; arr[i] = arr[i-1] + k;
    }
    cin >> M;
    while(M--) {
        int i, j; cin >> i >> j;
        cout << arr[j] - arr[i-1] << endl;
    }
    return 0;
}