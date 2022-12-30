#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10162 전자레인지 - https://www.acmicpc.net/problem/10162
 * Tier: Bronze I
 */

int main() {
    fastio;
    int T, btn = 0; cin >> T;
    if(T%10 != 0) cout << -1;
    else {
        cout << T/300 << " ";
        T = T%300;
        cout <<  T/60 << " ";
        T = T%60;
        cout << T/10;
    }
    return 0;
}