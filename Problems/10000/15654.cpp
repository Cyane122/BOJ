#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 15654 N과 M (5) - https://www.acmicpc.net/problem/15654
 * Tier: Silver III
 */

int N, M; vector<int> v, r;

void fun(int n) {
    if(n == M) {
        for(auto i: r) cout << i << " ";
        cout << endl;
        return;
    }
    for(auto i: v) {
        if(find(r.begin(), r.end(), i) == r.end()) {
            r.push_back(i);
            fun(n+1);
            r.pop_back();
        }
    }
}

int main() {
    fastio;
    cin >> N >> M;
    while(N--) {
        int k; cin >> k; v.push_back(k);
    }
    sort(v.begin(), v.end());
    fun(0);
    return 0;
}