#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10102 개표 - https://www.acmicpc.net/problem/10102
 * Tier: Bronze III
 */

int main() {
    fastio;
    string s; int v; cin >> v >> s; int a = 0, b = 0;
    for(char c : s) {
        if(c == 'A') a++;
        if(c == 'B') b++;
    }
    cout << ((a == b)?"Tie":((a>b)?"A":"B"));
    return 0;
}