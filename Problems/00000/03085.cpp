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
 * BOJ 3085 사탕 게임 - https://www.acmicpc.net/problem/3085
 * Tier: Silver II
 */

int N, cnt, ans = 0; char m[101][101];

void checkHorizontal() {
    fri(N) {
        cnt = 1;
        frj(N) {
            if(m[i][j] == m[i][j+1]) cnt++;
            else {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
    }
}

void checkVertical() {
    fri(N) {
        cnt = 1;
        frj(N) {
            if(m[j][i] == m[j+1][i]) cnt++;
            else {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
    }
}

int main() {
    fastio;
    cin >> N;
    fri(N) frj(N) {
        cin >> m[i][j];
    }

    fri(N) frj(N-1) {
        swap(m[i][j], m[i][j+1]);
        checkVertical();
        checkHorizontal();
        swap(m[i][j], m[i][j+1]);
    }

    fri(N) frj(N-1) {
        swap(m[j][i], m[j+1][i]);
        checkVertical();
        checkHorizontal();
        swap(m[j][i], m[j+1][i]);
    }

    cout << ans;

    return 0;
}