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
 * BOJ 10951 A+B - 4 - https://www.acmicpc.net/problem/10951
 * Tier: Bronze V
 */

int main() {
    fastio;
    int A, B;
    while(true) {
        cin >> A >> B;
        if(cin.eof()) break;
        cout << A+B << endl;
    }
    return 0;
}