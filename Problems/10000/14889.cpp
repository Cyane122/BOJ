#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 14889 스타트와 링크 - https://www.acmicpc.net/problem/14889
 * Tier: Silver II
 */

int S[22][22], N, m = 1000000; bool team[22];

void fun(int n, int t) {
    vector<int> v1, v2;
    int S1 = 0, S2 = 0;
    if(t == N/2) {
        for(int i = 1; i <= N; i++) {
            if(team[i]) v1.push_back(i);
            else v2.push_back(i);
        }
        for(int i = 0; i < N/2; i++) {
            for(int j = 0; j < N/2; j++) {
                S1 += S[v1[i]][v1[j]];
                S2 += S[v2[i]][v2[j]];
            }
        }
        int k = abs(S2-S1);
        m = min(m, k);
        return;
    }
    for(int i = n; i <= N; i++) {
        if(team[i]) continue;
        else {
            team[i] = true;
            fun(i, t+1);
            team[i] = false;
        }
    }
}

int main() {
    fastio;
    cin >> N;
    for(int i = 1; i <= N; i++) for(int j = 1; j <= N; j++) cin >> S[i][j];
    fun(1, 0);
    cout << m;
    return 0;
}