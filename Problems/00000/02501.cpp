#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2501 약수 구하기 - https://www.acmicpc.net/problem/2501
 * Tier: Bronze III
 */

int N, K; vector<int> v;

int main() {
    fastio;
    cin >> N >> K;
    for(int i = 1; i <= N; i++) {
        if(N%i == 0) v.push_back(i);
    }
    if(v.size() < K) cout << 0;
    else cout << v[K-1];
    return 0;
}