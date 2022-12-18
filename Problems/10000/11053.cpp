#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 11053 가장 긴 증가하는 부분 수열 - https://www.acmicpc.net/problem/11054
 * Tier: Silver II
 */

using namespace std;

int arr[1001];

int main() {
    fastio;

    int N, M = 0, len = 0; cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        if(M < arr[i]) {
            M = arr[i];
            len++;
        }
    }

    cout << len;

    return 0;
}