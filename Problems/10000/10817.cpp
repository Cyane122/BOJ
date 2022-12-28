#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10817 세 수 - https://www.acmicpc.net/problem/10817
 * Tier: Bronze III
 */

int main() {
    fastio;
    vector<int> v;
    for(int i = 0; i < 3; i++) {
        int k; cin >> k; v.push_back(k);
    }
    sort(v.begin(), v.end());
    cout << v[1];
    return 0;
}