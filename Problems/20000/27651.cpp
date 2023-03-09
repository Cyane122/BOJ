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
 * BOJ 27651 벌레컷 - https://www.acmicpc.net/problem/27651
 * Tier: Gold III
 */

using namespace std;

long long cnt = 0, arr[1000003], PSum[1000003] = {0}; int S = 2, E, N, K = 0;

int main() {
    fastio;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> arr[i];
        PSum[i] = PSum[i-1] + arr[i];
    }
    E = N;
    for(int X = 1; X < N; X++) {
        long long A = PSum[X] + PSum[N], B = PSum[N]-PSum[X];
        if(A/2>B) break;
        while(A/2 >= PSum[S]) S++;
        while(PSum[E] >= B) E--;
        cnt += E-S+1;
    }
    cout << cnt;
    return 0;
}