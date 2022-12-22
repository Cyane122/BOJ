#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 11508 2+1 세일 - https://www.acmicpc.net/problem/11508
 * Tier: Silver IV
 */

vector<int> v;

bool amp(int a, int b) {
    return a > b;
}

int main() {
    fastio;
    int N, P = 0; cin >> N;
    for(int i = 0; i < N; i++) {
        int k; cin >> k; v.push_back(k);
    }

    sort(v.begin(), v.end(), amp);
    for(int i = 0; i + 1 < v.size(); i += 3) {
        P += v[i] + v[i+1];
    }

    if(v.size() % 3 == 1) P += v[v.size()-1];

    cout << P;
    return 0;
}