#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 25501 재귀의 귀재 - https://www.acmicpc.net/problem/25501
 * Tier: Bronze II
 */

int times = 0;

int recursion(const char *s, int l, int r) {
    times++;
    if(l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s) {
    return recursion(s, 0, strlen(s)-1);
}

int main() {
    fastio;
    int T; cin >> T;
    for(int i = 0; i < T; i++) {
        char s[1001]; cin >> s;
        cout << isPalindrome(s) << " " << times << endl;
        times = 0;
    }
    return 0;
}