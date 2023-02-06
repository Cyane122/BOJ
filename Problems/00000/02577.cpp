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
 * BOJ 2577 숫자의 개수 - https://www.acmicpc.net/problem/2577
 * Tier: Bronze II
 */

long long int A, B, C; int cnt[10];

int main() {
    fastio;
    cin >> A >> B >> C;
    long long int K = A*B*C;
    string s = to_string(K);
    for(char c: s) {
        cnt[c-'0']++;
    }
    fri(10) {
        cout << cnt[i] << endl;
    }
    return 0;
}