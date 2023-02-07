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
 * BOJ 1292 쉽게 푸는 문제 - https://www.acmicpc.net/problem/1292
 * Tier: Bronze I
 */

long long int A, B, S[1002], idx = 1;

int main() {
    fastio;
    cin >> A >> B;
    for(int i = 1;;i++) {
        frj(i) {
            if(idx == B+1) {
                cout << S[B] - S[A-1];
                return 0;
            }
            S[idx] = i + S[idx-1];
            idx++;
        }
    }
    return 0;
}