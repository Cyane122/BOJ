#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10164 격자상의 경로 - https://www.acmicpc.net/problem/10164
 * Tier: Silver I
 */

int N, M, K;

int fun(int x, int y, int p, int q) {
    if(x == p && y == q) return 1;
    if(x > p || y > q) return 0;
    return fun(x+1, y, p, q) + fun(x, y+1, p, q);
}

int main() {
    fastio;
    cin >> N >> M >> K;

    if(K == 0) cout << fun(1, 1, N, M);
    else {
        int H = (K-1)/M;
        int W = (K-1)%M;
        cout << fun(1, 1, H+1, W+1)*fun(H+1, W+1, N, M);
    }

    return 0;
}