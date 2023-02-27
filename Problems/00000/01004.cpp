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
 * BOJ 1004 어린 왕자 - https://www.acmicpc.net/problem/1004
 * Tier: Silver III
 */

double CX, CY, R; int T, N, B = 0;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1-x2, 2) + pow((y1-y2), 2));
}

int main() {
    fastio;
    cin >> T;
    wh(T) {
        int x1, x2, y1, y2, cnt = 0; cin >> x1 >> y1 >> x2 >> y2 >> N;
        fri(N) {
            bool i1, i2;
            cin >> CX >> CY >> R;
            i1 = (distance(CX, CY, x1, y1) <= R);
            i2 = distance(CX, CY, x2, y2) <= R;
            if(i1 != i2) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}