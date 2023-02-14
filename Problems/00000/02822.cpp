#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fri(n) for(int i = 0; i < n; i++)
#define frj(n) for(int j = 0; j < n; j++)
#define frk(n) for(int k = 0; k < n; k++)
#define wh(n) while(n--)
#define vi vector<int>
#define vd vector<double>
#define sortV(v, amp) sort(v.begin(), v.end(), amp)

using namespace std;

/**
 * BOJ 2822 점수 계산 - https://www.acmicpc.net/problem/2822
 * Tier: Silver V
 */

vector<pair<int, int>> v; int S = 0; vi v2;

bool amp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    fastio;
    fri(8) {
        int k; cin >> k; v.emplace_back(i+1, k);
    }
    sortV(v, amp);
    fri(5) {
        S += v[v.size()-i-1].second;
    }
    cout << S << endl;
    fri(5) {
        v2.push_back(v[v.size()-i-1].first);
    }
    sortV(v2, less<int>());
    for(auto i: v2) cout << i << " ";
    return 0;
}