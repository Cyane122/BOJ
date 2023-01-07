#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 15688 수 정렬하기 5 - https://www.acmicpc.net/problem/15688
 * Tier: Silver V
 */

int N; vector<int> v;

int main() {
    fastio;
    cin >> N;
    while(!v.empty()) v.pop_back();
    for(int i = 0; i < N; i++) {
        int k; cin >> k; v.push_back(k);
    }
    sort(v.begin(), v.end());
    for(auto i: v) cout << i << endl;
    return 0;
}