#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 10828 스택 - https://www.acmicpc.net/problem/10828
 * Tier: Silver IV
 */

using namespace std;

stack<int> s;

int main() {
    fastio;

    int N; cin >> N;

    for(int i = 0; i < N; i++) {
        string str; cin >> str;
        if(str == "push") {
            int k; cin >> k; s.push(k);
        } else if (str == "pop") {
            if(s.empty()) cout << -1 << endl;
            else {
                cout << s.top() << endl;
                s.pop();
            }
        } else if (str == "size") {
            cout << s.size() << endl;
        } else if (str == "empty") {
            cout << (int)(s.empty()) << endl;
        } else if (str == "top") {
            if(s.empty()) cout << -1 << endl;
            else cout << s.top() << endl;
        }

    }

    return 0;
}