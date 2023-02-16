#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fri(n) for(int i = 0; i < n; i++)
#define frj(n) for(int j = 0; j < n; j++)
#define frk(n) for(int k = 0; k < n; k++)
#define wh(n) while(n--)
#define vi vector<int>
#define vd vector<double>
#define sortV(v, amp) sort(v.begin(), v.end(), amp)
#define cinV(v, type) type p; cin >> p; v.push_back(p)

using namespace std;

/**
 * BOJ 2470 두 용액 - https://www.acmicpc.net/problem/2470
 * Tier: Gold V
 */

vector<int> answer(2);
int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int start = 0;
    int end = N - 1;
    int min = INT_MAX;
    while (start < end) {
        int sum = arr[start] + arr[end];

        if (min > abs(sum)) {
            min = abs(sum);
            answer[0] = arr[start];
            answer[1] = arr[end];

            if (sum == 0)
                break;
        }

        if (sum < 0)
            start++;
        else
            end--;
    }

    cout << answer[0] << " " << answer[1];
}