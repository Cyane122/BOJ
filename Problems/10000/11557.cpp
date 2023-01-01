#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 11557 Yangjojang of The Year - https://www.acmicpc.net/problem/11557
 * Tier: Bronze I
 */

int main() {
    fastio;
    int T; cin >> T;
    while(T--) {
        int N, m = 0; string s; cin >> N;
        while(N--) {
            string n; int k; cin >> n >> k;
            if(k > m) {
                m = k;
                s = n;
            }
        }
        cout << s << endl;
    }
    return 0;
}