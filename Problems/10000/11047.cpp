#include <bits/stdc++.h>

#define endl "\n"
/**
 * BOJ 11047 동전 0 - https://www.acmicpc.net/problem/11047
 */

using namespace std;

int arr[11];

int main() {
    int N, K; cin >> N >> K;
    int coin = 0;
    for(int i = 0; i < N; i++) cin >> arr[i];

    for(int i = N-1; ;i--) {
        if(i < 0) break;
        while(K >= arr[i]) {
            coin++;
            K-=arr[i];
        }
    }

    cout << coin;

    return 0;
}