#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 14650 걷다보니 신천역 삼 (Small) - https://www.acmicpc.net/problem/14650
 * Tier: Silver I
 */

int N, S = 0, R = 0;

void fun(int n) {
    if(n == N) {
        if(S%3 == 0) R++;
        return;
    }
    for(int i = 0; i < 3; i++) {
        if(n == 0 && i == 0) continue;
        S += i;
        fun(n+1);
        S -= i;
    }
}

int main() {
    fastio;
    cin >> N;
    fun(0);
    cout << R;
    return 0;
}