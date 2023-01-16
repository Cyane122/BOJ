#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10819 차이를 최대로 - https://www.acmicpc.net/problem/10819
 * Tier: Silver II
 */

int v[9], r[9]; int N, m = 0; bool used[9];

void fun(int n) {
    if(n == N) {
        int s = 0;
        for(int i = 1; i < N; i++) {
            s += abs(r[i] - r[i-1]);
        }
        m = max(s, m);
        return;
    }
    else {
        for(int i = 0; i < N; i++) {
            if(!used[i]) {
                r[n] = v[i];
                used[i] = true;
                fun(n+1);
                used[i] = false;
                r[n] = 0;
            }
        }
    }
}

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> v[i];
        used[i] = false;
    }
    fun(0);
    cout << m;
    return 0;
}