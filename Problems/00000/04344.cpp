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
 * BOJ 4344 평균은 넘겠지 - https://www.acmicpc.net/problem/4344
 * Tier: Bronze I
 */

int C, N, score[1000];

int main() {
    fastio;
    cin >> C;
    wh(C) {
        cin >> N; int S = 0, cnt = 0;
        fri(N) {
            cin >> score[i]; S += score[i];
        }
        S /= N;
        fri(N) {
            if(score[i] > S) cnt++;
        }
        cout << fixed;
        cout.precision(3);
        cout << 100.0 * (double)cnt / (double)N << "%" << endl;
    }
    return 0;
}