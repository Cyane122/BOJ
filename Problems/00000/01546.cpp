#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fr(n) for(int i = 0; i < n; i++)
#define vi vector<int>
#define vd vector<double>
#define sortV(v) sort(v.begin(), v.end())

using namespace std;

/**
 * BOJ 1546 평균 - https://www.acmicpc.net/problem/1546
 * Tier: Bronze I
 */

int N; vd v; double S = 0;

int main() {
    fastio;
    cin >> N;
    fr(N) {
        int k; cin >> k; v.push_back(k);
    }
    sortV(v);
    double M = v[v.size() - 1];
    fr(N) {
        S += v[i]/M * 100;
    }
    cout << S/v.size();
    return 0;
}