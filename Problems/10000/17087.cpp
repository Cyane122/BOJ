#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 17087 숨바꼭질 6 - https://www.acmicpc.net/problem/17087
 * Tier: Silver II
 */

using namespace std;

vector<int> v;

int main() {
    fastio;

    int N, S; cin >> N >> S;
    for(int i = 0; i < N; i++) {
        int k; cin >> k; v.push_back(abs(S-k));
    }

    return 0;
}