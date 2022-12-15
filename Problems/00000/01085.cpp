#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1085 직사각형에서 탈출 - https://www.acmicpc.net/problem/1085
 * Tier: Bronze 3
 */

using namespace std;

int main() {
    fastio;

    int X, Y, W, H; cin >> X >> Y >> W >> H;

    cout << min(min(X, W-X), min(Y, H-Y));

    return 0;
}