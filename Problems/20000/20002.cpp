#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define fri(n) for(int i = 0; i < n; i++)
#define frj(n) for(int j = 0; j < n; j++)
#define frk(n) for(int k = 0; k < n; k++)
#define wh(n) while(n--)
#define vi vector<int>
#define vd vector<double>
#define sortV(v, amp) sort(v.begin(), v.end(), amp)
#define cinV(v, type) type p; cin >> p; v.push_back(p);

using namespace std;

/**
 * BOJ 20002 사과나무 - https://www.acmicpc.net/problem/2002
 * Tier: Gold V
 */

int MAP[301][301], Sum[301][301], N, Answer = INT_MIN;

int main() {
    fastio;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> MAP[i][j];
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            Sum[i][j] = MAP[i][j] + Sum[i][j - 1] + Sum[i - 1][j] - Sum[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int X = min(N - i, N - j);
            for (int k = 0; k <= X; k++) {
                int Cur = Sum[i + k][j + k] - Sum[i - 1][j + k] - Sum[i + k][j - 1] + Sum[i - 1][j - 1];
                Answer = max(Answer, Cur);
            }
        }
    }

    cout << Answer;
    return 0;
}