#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 14425 문자열 집합 - https://www.acmicpc.net/problem/14425
 * Tier: Silver 3
 */

using namespace std;

set<string> s;

int main() {
    fastio;

    int N, M, K = 0; cin >> N >> M;
    for(int i = 0; i < N; i++) {
        string str; cin >> str;
        s.insert(str);
    }
    for(int i = 0; i < M; i++) {
        string str; cin >> str;
        if(s.find(str) != s.end()) K++;
    }
    cout << K;


    return 0;
}