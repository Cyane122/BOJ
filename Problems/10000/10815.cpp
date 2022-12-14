#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 10815 숫자 카드 - https://www.acmicpc.net/problem/10815
 * Tier: Silver 5
 */

using namespace std;


int main() {
    fastio;

    int N, M; cin >> N;

    vector<int> v;
    set<int> s;

    for(int i = 0; i < N; i++) {
        int k; cin >> k;
        s.insert(k);
    }
    cin >> M;
    for(int i = 0; i < M; i++) {
        int k; cin >> k;
        if(s.find(k) == s.end()) v.push_back(0);
        else v.push_back(1);
    }

    for(int i : v) {
        cout << i << " ";
    }




    return 0;
}