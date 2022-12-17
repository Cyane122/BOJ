#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1181 단어 정렬 - https://www.acmicpc.net/problem/1181
 * Tier: Silver 5
 */

using namespace std;

struct compare {
    bool operator()(const string& a, const string& b) const {
        if(a.size() == b.size()) return a < b;
        else {
            return a.size() < b.size();
        }
    }
};


set<string, compare> s;

int main() {
    fastio;

    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        string str; cin >> str;

        s.insert(str);
    }

    for(const auto& a: s) cout << a << endl;


    return 0;
}