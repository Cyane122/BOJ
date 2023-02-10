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
 * BOJ 1629 곱셈 - https://www.acmicpc.net/problem/1629
 * Tier: Silver I
 */

long long int A, B, C, R = 1;

int main() {
    fastio;
    cin >> A >> B >> C;
    while(B > 0) {
        if(B%2 == 1) R = (R*A)%C;
        A = ((A%C) * (A%C)) %C;
        B /= 2;
    }
    cout << R;
    return 0;
}