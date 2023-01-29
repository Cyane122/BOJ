#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 6443 애너그램 - https://www.acmicpc.net/problem/6443
 * Tier: Gold V
 */

string str; int len, T;

void DFS(string s, int idx) {
    if (idx == len - 1) {
        cout << s << endl;
        return;
    }
    for (int i = idx; i < len; i++) {
        if (i != idx && s[i] == s[idx]) continue;
        if(s[i] != s[idx]){
            char c = s[i];
            s[i] = s[idx];
            s[idx] = c;
        }
        DFS(s, idx + 1);
    }
}

int main() {
    cin >> T;
    while (T--) {
        cin >> str;
        len = str.size();
        sort(str.begin(), str.end());
        DFS(str, 0);
    }
    return 0;
}