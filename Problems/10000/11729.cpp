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
 * BOJ 11729 하노이 탑 이동 순서 - https://www.acmicpc.net/problem/
 * Tier: Silver I
 */

using namespace std;

int N;

void hanoi(int n, int start, int mid, int end) {
    if(n == 1) {
        cout << start << " " << end << endl;
        return;
    }
    hanoi(n-1, start, end, mid);
    hanoi(1, start, mid, end);
    hanoi(n-1, mid, start, end);
}

int main() {
    fastio;

    cin >> N; cout << pow(2, N) - 1 << endl;

    hanoi(N, 1, 2, 3);

    return 0;
}