#include <bits/stdc++.h>
#define endl "\n"

/**
 * BOJ 2751 수 정렬하기 2 - https://www.acmicpc.net/problem/2751
 */


using namespace std;

int arr[1000001];

int main() {

    int N; cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];

    sort(arr, arr + N);

    for(int i = 0; i < N; i++) cout << arr[i] << endl;

    return 0;
}