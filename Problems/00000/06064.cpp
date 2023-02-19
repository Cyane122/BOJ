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
 * BOJ 6064 카잉 달력 - https://www.acmicpc.net/problem/6064
 * Tier: Silver I
 */

int T, M, N, X, Y; bool isFound = false;

int main() {
    fastio;
    cin >> T;
    wh(T) {
        cin >> M >> N >> X >> Y;
        X -= 1; Y -= 1;
        for(int i = X; i < N*M; i+=M) {
            if(i%N == Y) {
                cout << i+1 << endl;
                isFound = true;
                break;
            }
        }
        if(!isFound) cout << -1 << endl;
        isFound = false;
    }
    return 0;
}