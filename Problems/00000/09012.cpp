#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 9012 괄호 - https://www.acmicpc.net/problem/9012
 * Tier: Silver IV
 */

int main() {
    fastio;
    int l = 0, N = 0; bool k = true; cin >> N;
    while(N--) {
        string s; cin >> s;
        for(auto c: s) {
            if(c == '(') l++;
            else if (c == ')') {
                if(l > 0) l--;
                else {
                    k = false;
                    break;
                }
            }
        }
        if (l > 0) k = false;
        if(k) cout << "YES" << endl;
        else cout << "NO" << endl;

        k = true;
        l = 0;
    }
    return 0;
}