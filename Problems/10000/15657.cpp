#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 15657 N과 M (8) - https://www.acmicpc.net/problem/15657
 * Tier: Silver III
 */

int N, M; vector<int> v, r;

void fun(int n, int idx) {
    if(n == M) {
        for(auto i: r) cout << i << " ";
        cout << endl;
        return;
    }
    for(int i = idx; i < v.size(); i++) {
        r.push_back(v[i]);
        fun(n+1, i);
        r.pop_back();
    }
}

int main() {
    fastio;
    cin >> N >> M;
    while(N--) {
        int k; cin >> k; v.push_back(k);
    }
    sort(v.begin(), v.end());
    fun(0, 0);
    return 0;
}