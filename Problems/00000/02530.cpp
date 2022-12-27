#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2530 인공지능 시계 - https://www.acmicpc.net/problem/2530
 * Tier: Bronze IV
 */

int main() {
    fastio;
    int A, B, C, D; cin >> A >> B >> C >> D;
    pair<int, pair<int, int>> res = {(A + (B + (C+D)/60)/60)%24, {(B + (C+D)/60)%60, (C+D)%60}};
    cout << res.first << " " << res.second.first << " " << res.second.second;
    return 0;
}