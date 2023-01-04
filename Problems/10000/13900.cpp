#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 13900 순서쌍의 곱의 합 - https://www.acmicpc.net/problem/13900
 * Tier: Silver IV
 */

long long sum, ans = 0; int N, arr[100001];

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int k; cin >> k;
        sum += k;
        arr[i] = k;
    }
    for(int i = 0; i < N; i++) {
        ans += arr[i] * (sum - arr[i]);
    }
    cout << ans/2;
    return 0;
}