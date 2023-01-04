#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 18258 큐 2 - https://www.acmicpc.net/problem/18258
 * Tier: Silver IV
 */

queue<int> q; int N, X; string s;

int main() {
    fastio;
    cin >> N;
    while(N--) {
        cin >> s;
        if(s == "push") {
            cin >> X;
            q.push(X);
        } else if (s == "pop") {
            cout << ((q.empty()?-1:q.front())) << endl;
            if(!q.empty()) q.pop();
        } else if (s == "size") {
            cout << q.size() << endl;
        } else if (s == "empty") {
            cout << ((q.empty())?1:0) << endl;
        } else if (s == "front") {
            cout << ((q.empty())?-1:q.front()) << endl;
        } else if (s == "back") {
            cout << ((q.empty())?-1:q.back()) << endl;
        }
    }
    return 0;
}