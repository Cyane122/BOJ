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
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vpii vector<pair<int, int>>

using namespace std;

/**
 * BOJ 2635 수 이어가기 - https://www.acmicpc.net/problem/2635
 * Tier: Silver V
 */

int func(int x, int y) {
    int temp = x - y;
    if (temp < 0) return 2;
    return func(y, temp) + 1;
}

int N, cnt = 0, x = 0; vi v;

int main() {
    fastio;

    cin >> N;
    for (int i = 1; i <= N; i++) {
        int temp = func(N, i);
        if (temp > cnt) {
            x = i, cnt = temp;
        }
    }

    cout << cnt << endl;
    cout << N << " " << x;
    while (N - x >= 0) {
        int temp = N - x;
        N = x; x = temp;
        cout << ' ' << x;
    }

    return 0;
}