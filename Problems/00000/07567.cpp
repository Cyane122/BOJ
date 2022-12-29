#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 7567 그릇 - https://www.acmicpc.net/problem/7567
 * Tier: Bronze II
 */

int main() {
    fastio;
    string s; cin >> s; int h = 0; char ch = ' ';
    for(int i = 0; i < s.size(); i++) {
        if(ch == ' ') h+=10;
        else if (ch == s[i]) h+=5;
        else h += 10;
        ch = s[i];
    }
    cout << h;
    return 0;
}