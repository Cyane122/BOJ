#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 16139 인간-컴퓨터 상호작용 - https://www.acmicpc.net/problem/16139
 * Tier: Silver I
 */


int cnt[26][2000002];

int main() {
    fastio;
    string str; int q; cin >> str >> q;
    for(int i = 1; i <= str.size(); i++) {
        cnt[str[i-1] - 'a'][i]++;
        for(int j = 0; j < 26; j++) {
            cnt[j][i] += cnt[j][i-1];
        }
    }
    while(q--) {
        char c; int a, b, sum = 0;
        cin >> c >> a >> b;
        cout << cnt[c - 'a'][b+1] - cnt[c - 'a'][a] << endl;
    }
    return 0;
}