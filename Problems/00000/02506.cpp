#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fr(n) for(int i = 0; i < n; i++)

using namespace std;

/**
 * BOJ 2506 점수계산 - https://www.acmicpc.net/problem/2506
 * Tier: Bronze III
 */

int N, streak = 0, s = 0;

int main() {
    fastio;
    cin >> N;
    fr(N) {
        int k; cin >> k;
        if(k == 1) streak++;
        else streak = 0;
        s+=streak;
    }
    cout << s;
    return 0;
}