#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2798 블랙잭 - https://www.acmicpc.net/problem/2798
 * Tier: Bronze II
 */

vector<int> v;

int main() {
    fastio;
    int N, M, res = 0; cin >> N >> M;
    for(int i = 0; i < N; i++) {
        int k; cin >> k; v.push_back(k);
    }
    for(int i = 0; i < N-2; i++) {
        for(int j = i+1; j < N-1; j++) {
            for(int k = j+1; k < N; k++) {
                if(v[i] + v[j] + v[k] <= M) {
                    res = max(res, v[i] + v[j] + v[k]);
                }
            }
        }
    }
    cout << res;
    return 0;
}