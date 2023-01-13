#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 6603 로또 - https://www.acmicpc.net/problem/6603
 * Tier: Silver II
 */

vector<int> r, v; int S, K;

void fun(int n, int k) {
    if(n == 6) {
        for(auto i: r) cout << i << " ";
        cout << endl;
        return;
    }
    for(int i = k + 1; i < v.size(); i++) {
        r.push_back(v[i]);
        fun(n+1, i);
        r.pop_back();
    }
}

int main() {
    fastio;
    cin >> S;
    do {
        for(int i = 0; i < S; i++) {
            int k; cin >> k; v.push_back(k);
        }
        fun(0, -1);
        cin >> S;
        cout << endl;
        while(!v.empty()) v.pop_back();
    } while(S != 0);
    return 0;
}