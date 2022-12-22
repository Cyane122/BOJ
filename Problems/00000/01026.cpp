#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1026 보물 - https://www.acmicpc.net/problem/1026
 * Tier: Silver 4
 */

bool amp1(int a, int b) {
    return a < b;
}

bool amp2(int a, int b) {
    return a > b;
}

int A[100], B[100];

int main() {
    fastio;
    int N; cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];
    sort(A, A+N, amp1);
    sort(B, B+N, amp2);

    int res = 0;
    for(int i = 0; i < N; i++) {
        res += A[i] * B[i];
    }
    cout << res;
    return 0;
}