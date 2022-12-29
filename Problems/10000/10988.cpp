#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10988 팰린드롬인지 확인하기 - https://www.acmicpc.net/problem/10988
 * Tier: Bronze II
 */

int main() {
    fastio;
    string s; cin >> s; string s1 = s; reverse(s.begin(), s.end());
    if(s == s1) cout << 1;
    else cout << 0;
    return 0;
}