#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 11478 서로 다른 부분 문자열의 개수 - https://www.acmicpc.net/problem/11478
 * Tier: Silver 3
 */

using namespace std;

map<string, int> m;

int main() {
    fastio;

    string str; cin >> str;

    for(int i = 0; i < str.length(); i++) {
        for(int j = i; j < str.length(); j++) {
            string n = str.substr(i, j-i+1);
            if(m.find(n) == m.end()) m.insert({n, 1});
        }
    }

    cout << m.size();

    return 0;
}