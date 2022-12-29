#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2884 알람 시계 - https://www.acmicpc.net/problem/2884
 * Tier: Bronze III
 */

int main() {
    fastio;
    int H, M; cin >> H >> M;
    if(M < 45) {
        M = 60 + (M-45);
        H--;
        if(H < 0) H += 24;
    } else M -= 45;
    cout << H << " " << M;
    return 0;
}