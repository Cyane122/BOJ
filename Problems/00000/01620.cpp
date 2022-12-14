#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1620 나는야 포켓몬 마스터 이다솜 - https://www.acmicpc.net/problem/1620
 * Tier: Silver 4
 */

using namespace std;

vector<string> v;
map<string, int> m;

int main() {
    fastio;

    int N, M; cin >> N >> M;
    for(int i = 0; i < N; i++) {
        string str; cin >> str;
        v.push_back(str);
        m.insert({str, i});
    }

    for(int i = 0; i < M; i++) {
        string str; cin >> str;
        try {
            int k = stoi(str);
            cout << v[k-1] << endl;
        } catch (const exception& expn) {
            cout << m.find(str)->second + 1 << endl;
        }
    }

    return 0;
}