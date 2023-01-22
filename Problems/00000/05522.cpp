#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 5522 카드 게임 - https://www.acmicpc.net/problem/5522
 * Tier: Bronze V
 */

int S = 0, N;

int main() {
    fastio;
    for(int i = 0; i < 5; i++) {
        cin >> N;
        S += N;
    }
    cout << S;
    return 0;
}