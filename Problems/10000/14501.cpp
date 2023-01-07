#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 14501 퇴사 - https://www.acmicpc.net/problem/14501
 * Tier: Silver III
 */

vector<int> T, P, v; int N;

void fun(int start, int d) {
    if(start == N+1) {
        v.push_back(d);
        return;
    }
    if(T[start-1] + start > N+1) {
        fun(start + 1, d);
    } else {
        fun(start + T[start-1], d + P[start-1]);
        fun(start + 1, d);
    }
}

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int t, p; cin >> t >> p;
        T.push_back(t);
        P.push_back(p);
    }
    fun(1, 0);
    sort(v.begin(), v.end());
    cout << v[v.size()-1];
    return 0;
}