#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 17413 단어 뒤집기 2 - https://www.acmicpc.net/problem/17413
 * Tier: Silver III
 */

string str; bool tag = false; stack<char> s;

void print() {
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
}

int main() {
    fastio;
    getline(cin, str);
    for(char ch: str) {
        if(ch == '<') {
            print();
            tag = true;
            cout << ch;
        } else if (ch == '>') {
            tag = false;
            cout << ch;
        } else if (tag) {
            cout << ch;
        } else {
            if(ch == ' ') {
                print();
                cout << ch;
            } else {
                s.push(ch);
            }
        }
    }
    print();
    return 0;
}