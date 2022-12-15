#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1010 다리 놓기 - https://www.acmicpc.net/problem/1010
 * Tier: Silver 5
 */

using namespace std;

int arr[31][31];

int nPr(int n, int r) {
    if(n == 0 || r == 0 || r == n) {
        arr[n][r] = 1;
        return 1;
    } else if (arr[n][r] != 0) return arr[n][r];
    else {
        arr[n][r] = nPr(n-1, r-1) + nPr(n-1, r);
        return arr[n][r];
    }
}

int main() {
    fastio;

    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        int n, r; cin >> n >> r;
        cout << nPr(max(n, r), min(n, r)) << endl;
    }

    return 0;
}