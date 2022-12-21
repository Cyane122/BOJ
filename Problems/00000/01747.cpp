#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1747 소수&팰린드롬 - https://www.acmicpc.net/problem/1747
 * Tier: Silver I
 */

using namespace std;

bool primeCheck(int n) {
    if(n == 2) return true;
    else {
        for(int i = 2; i <= sqrt(n); i++) {
            if(n%i == 0) return false;
        }
        return true;
    }
}

int main() {
    fastio;
    int N; cin >> N;
    for(int i = N; ; i++) {
        if(i == 1) continue;
        string s = to_string(i), s2 = to_string(i);
        reverse(s.begin(), s.end());
        if(s == s2 && primeCheck(i)) {
            cout << i;
            break;
        }
    }
    return 0;
}