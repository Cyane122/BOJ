#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1316 그룹 단어 체커 - https://www.acmicpc.net/problem/1316
 * Tier: Silver 5
 */

using namespace std;

int main() {
    fastio;

    int N; cin >> N;
    int T = N; bool isOver;
    for(int i = 0; i < N; i++) {
        string str; cin >> str;
        isOver = false;
        for(int j = 0; j < str.length(); j++) {
            bool is = true;
            for(int k = j; k < str.length(); k++) {
                if(str[k] != str[j]) is = false;
                if(str[k] == str[j] && !is) {
                    T--;
                    isOver = true;
                    break;
                }
            }
            if(isOver) break;
        }
    }

    cout << T;

    return 0;
}