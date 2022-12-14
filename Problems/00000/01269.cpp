#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1269 대칭 차집합 - https://www.acmicpc.net/problem/1269
 * Tier: Silver 4
 */

using namespace std;

map<int, int> A, B, AmB, BmA;

int main() {
    fastio;

    int N, M; cin >> N >> M;

    for(int i = 0; i < N; i++) {
        int k; cin >> k;
        A.insert({k, 1});
    }
    for(int i = 0; i < M; i++) {
        int k; cin >> k;
        B.insert({k, 1});
    }

    for(auto a: A) {
        if(B.find(a.first) == B.end()) AmB.insert({a.first, 1});
    }
    for(auto b: B) {
        if(A.find(b.first) == A.end()) BmA.insert({b.first, 1});
    }

    cout << AmB.size() + BmA.size() << endl;

    return 0;
}