#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1182 부분수열의 합 - https://www.acmicpc.net/problem/1182
 * Tier: Silver II
 */

vector<int> v, r; int N, S, R = 0;

void fun(int n) {
    int p = 0;
    if(n != -1) {
        for(auto i: r) {
            p += i;
        }
        if(p == S) {
            R++;
        }
    }
    for(int i = n+1; i < v.size(); i++) {
        r.push_back(v[i]);
        fun(i);
        r.pop_back();
    }
}

int main() {
    fastio;
    cin >> N >> S;
    while(N--) {
        int k; cin >> k; v.push_back(k);
    }
    fun(-1);
    cout << R;
    return 0;
}