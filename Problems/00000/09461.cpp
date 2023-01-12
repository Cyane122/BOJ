#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 9461 파도반 수열 - https://www.acmicpc.net/problem/9461
 * Tier: Silver III
 */

long long int DP[102] = {0, 1, 1, 1, 2, 2, 3, 4};
int N, T, M = 0; vector<int> v;

void fun(int n) {
    DP[n] = DP[n-1] + DP[n-5];
    if(n == M) return;
    fun(n+1);
}

int main() {
    fastio;
    cin >> T;
    while(T--) {
        cin >> N;
        M = max(M, N);
        v.push_back(N);
    }
    fun(7);
    for(int i: v) cout << DP[i] << endl;
    return 0;
}