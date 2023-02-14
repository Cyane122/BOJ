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

using namespace std;

/**
 * BOJ 5054 주차의 신 - https://www.acmicpc.net/problem/5054
 * Tier: Bronze II
 */

int T, N;

int main() {
    fastio;
    cin >> T;
    wh(T) {
        cin >> N;
        vi v;
        wh(N) {
            int k; cin >> k; v.push_back(k);
        }
        sortV(v, greater<int>());
        int m = 2000000000;
        int tmp = 0;
        int sum = 0;
        for (int i = 0; i < N - 1; i++)
            sum += abs(v[i + 1] - v[i]);
        while (tmp++<v[N-1])
        {
            sum += abs(v[N - 1] - tmp)+abs(v[0]-tmp);
            if (m > sum)
                m = sum;
            sum -= abs(v[N - 1] - tmp) + abs(v[0] - tmp);
        }
        cout << m << endl;
    }
    return 0;
}