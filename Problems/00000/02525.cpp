#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2525 오븐 시계 - https://www.acmicpc.net/problem/2525
 * Tier: Bronze III
 */

int main() {
    fastio;
    int A, B, C; cin >> A >> B >> C;
    int hour = C/60; int min = C%60;
    pair<int, int> res = {(A+hour + (B+min)/60)%24, (B+min)%60};
    cout << res.first << " " << res.second;
    return 0;
}