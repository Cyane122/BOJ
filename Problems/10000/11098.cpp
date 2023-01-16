#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 11098 첼시를 도와줘! - https://www.acmicpc.net/problem/11098
 * Tier: Bronze II
 */

int N, P, M = 0; string name;

int main() {
    fastio;
    cin >> N;
    while(N--) {
        cin >> P;
        while(P--) {
            int m; string s; cin >> m >> s;
            if(m > M) {
                name = s;
                M = m;
            }
        }
        cout << name << endl;
        M = 0;
    }
    return 0;
}