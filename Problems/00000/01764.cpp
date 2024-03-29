#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1764 듣보잡 - https://www.acmicpc.net/problem/1764
 * Tier: Silver 4
 */

using namespace std;

set<string> s;
vector<string> v;

int main() {
    fastio;

    int N, M; cin >> N >> M;

    for(int i = 0; i < N; i++) {
        string str; cin >> str;
        s.insert(str);
    }

    for(int i = 0; i < M; i++) {
        string str; cin >> str;
        if(s.find(str) != s.end()) v.push_back(str);
    }

    sort(v.begin(), v.end());

    cout << v.size() << endl;

    for(string& str: v) {
        cout << str << endl;
    }

    return 0;
}