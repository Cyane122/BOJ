#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 14225 부분수열의 합 - https://www.acmicpc.net/problem/14225
 * Tier: Silver I
 */

int N, S = 0; vector<int> v, r;

void fun(int idx) {
    for(int i = idx + 1; i < v.size(); i++) {
        S += v[i];
        r.push_back(S);
        fun(i);
        S -= v[i];
    }
}

int main() {
    fastio;
    cin >> N;
    while(N--) {
        int k; cin >> k; v.push_back(k);
    }
    fun(-1);
    sort(r.begin(), r.end());
    r.erase(unique(r.begin(), r.end()), r.end());
    for(int i = 0; i < r.size(); i++) {
        if(i+1 != r[i]) {
            cout << i+1;
            break;
        }
        if(i == r.size() - 1) cout << r.size() + 1;
    }
    return 0;
}