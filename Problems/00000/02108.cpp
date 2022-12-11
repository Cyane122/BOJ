#include <bits/stdc++.h>

/**
 * BOJ 2108 통계학 - https://www.acmicpc.net/problem/2108
 * NON_FINISHED
 */

using namespace std;

int arr[500001];
int cnt [8001];

int main() {
    int N; cin >> N;
    int sum = 0;

    for(int i = 0; i < 8000; i++) cnt[i] = 0;

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        cnt[arr[i] + 4000]++;
        sum += arr[i];
    }

    int MAX = 0;
    int MAX_VALUE[8001];

    for(int i = 0; i <= 8000; i++) {
        if(cnt[i] > MAX) MAX = cnt[i];
    }

    int k = 0;

    for(int i = 0; i <= 8000; i++) {
        if(cnt[i] == MAX) {
            MAX_VALUE[k] = i - 4000;
            k++;
        }
    }


    sort(MAX_VALUE, MAX_VALUE+k);
    sort(arr, arr+N);
    cout << sum/N << "\n";
    cout << arr[N/2] << "\n";
    cout << MAX_VALUE[k-3] << "\n";
    cout << arr[N-1] - arr[0] << "\n";
}