#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 18870 좌표 압축 - https://www.acmicpc.net/problem/18870
 * Tier: Silver 2
 */

using namespace std;

int code[1000001];

vector<int> v, w;

int main() {
    fastio;

    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        int m; cin >> m;
        v.push_back(m);
        w.push_back(m);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int & i : w) {
        cout << lower_bound(v.begin(), v.end(), i) - v.begin() << " ";
    }

    return 0;
}