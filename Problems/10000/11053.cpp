#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 11053 가장 긴 증가하는 부분 수열 - https://www.acmicpc.net/problem/11053
 * Tier: Silver II
 */

using namespace std;

int A[1002], D[1002];

int main() {
    fastio;

    int N, M = 0; cin >> N;

    for(int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for(int i = 1; i <= N; i++) {
        D[i] = 0;
        for(int j = 1; j < i; j++) {
            if(A[j] < A[i] && D[j] >= D[i]) D[i] = D[j] + 1;
        }

        M = max(D[i], M);
    }
    cout << M+1;

    return 0;
}