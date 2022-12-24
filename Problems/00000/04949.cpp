#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 4949 균형잡힌 세상 - https://www.acmicpc.net/problem/4949
 * Tier: Silver IV
 */

stack<char> s;

int main() {
    fastio;
    string str;
    while(true) {
        getline(cin, str); bool k = false;
        if(str == ".") break;
        for(char c: str) {
            if(c == '(' || c == '[' || c == ']' || c == ')') {
                if(c == '(' || c == '[') {
                    s.push(c);
                    continue;
                } else if(s.empty() && (c == ']' || c == ')')) {
                    cout << "no" << endl; k = true; break;
                } else if((c == ')' && s.top() == '(') || (c == ']' && s.top() == '[')) {
                    s.pop();
                    continue;
                } else if((c == ')' && s.top() == '[') || (c == ']' && s.top() == '(')){
                    cout << "no" << endl; k = true; break;
                }
            }
        }
        if(!s.empty() && !k) {
            cout << "no" << endl;
        } else if (!k) cout << "yes" << endl;
        while(!s.empty()) s.pop();
    }
    return 0;
}