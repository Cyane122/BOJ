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
 * BOJ 2953 나는 요리사다 - https://www.acmicpc.net/problem/2953
 * Tier: Bronze III
 */

int M = 0, A, B, C, D, idx = 0;

int main() {
    fastio;
    fri(5) {
        cin >> A >> B >> C >> D;
        if(M < A+B+C+D) {
            M = A+B+C+D;
            idx = i+1;
        }
    }
    cout << idx << " " << M;
    return 0;
}