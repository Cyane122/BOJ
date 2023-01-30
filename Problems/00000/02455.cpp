#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fr(n) for(int i = 0; i < n; i++)
#define vi vector<int>
#define vd vector<double>
#define sortV(v) sort(v.begin(), v.end())

using namespace std;

/**
 * BOJ 2455 지능형 기차 - https://www.acmicpc.net/problem/2455
 * Tier: Bronze III
 */

int r = 0, M = 0;

int main() {
    fastio;
    fr(4) {
        int a, b; cin >> a >> b; r = r-a+b;
        M = max(M, r);
    }
    cout << M;
    return 0;
}