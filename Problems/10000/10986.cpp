#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10986 나머지 합 - https://www.acmicpc.net/problem/10986
 * Tier: Gold III
 */

long long cnt[1001], arr[1000002];
int N, M;

int main() {
    fastio;
    cin >> N >> M;
    for(int i = 1; i <= N; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
        arr[i] %= M;
        cnt[arr[i]]++;
    }

    long long int ans = cnt[0];
    for(int i = 0; i < M; i++) {
        long long int now = cnt[i];
        ans += now * (now - 1)/2;
    }
    cout << ans;
    return 0;
}