#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fri(n) for(int i = 0; i < n; i++)
#define frj(n) for(int j = 0; j < n; j++)
#define frk(n) for(int k = 0; k < n; k++)
#define vi vector<int>
#define vd vector<double>
#define sortV(v, amp) sort(v.begin(), v.end(), amp)

using namespace std;

/**
 * BOJ 2908 상수 - https://www.acmicpc.net/problem/2908
 * Tier: Bronze II
 */

int reverse(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main() {
    fastio;
    int A, B; cin >> A >> B;
    if(reverse(A) > reverse(B)) cout << reverse(A);
    else cout << reverse(B);
    return 0;
}