#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10610 30 - https://www.acmicpc.net/problem/10610
 * Tier: Silver IV
 */

bool amp(int a, int b) {
    return a > b;
}

int main() {
    fastio;
    string N; cin >> N;
    vector<int> v;
    if(N.find('0') == string::npos) cout << -1;
    else {
        int sum = 0;
        for(char c: N) {
            int k = c - '0';
            sum += k;
            v.push_back(k);
        }
        if(sum%3 != 0) cout << -1;
        else {
            sort(v.begin(), v.end(), amp);
            for(int i: v) cout << i;
        }
    }
    return 0;
}