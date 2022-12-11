#include <bits/stdc++.h>

#define endl "\n"

/**
 * BOJ 11399 ATM - https://www.acmicpc.net/problem/11399
 */

using namespace std;

int arr[1001];
int sum[1002] = {0};

int main() {

    int N; cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];

    sort(arr, arr+N);
    for(int i = 1; i <= N; i++) {
        sum[i] = sum[i-1] + arr[i-1];
    }

    int s = 0;
    for(int i = 1; i <= N; i++) s+=sum[i];

    cout << s;

    return 0;
}