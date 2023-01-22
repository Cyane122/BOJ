#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10178 할로윈의 사탕 - https://www.acmicpc.net/problem/10178
 * Tier: Bronze III
 */

int T, C, V;

int main() {
    fastio;
    cin >> T;
    while(T--) {
        cin >> C >> V;
        cout << "You get " << C/V << " piece(s) and your dad gets " << C%V << " piece(s)." << endl;
    }
    return 0;
}