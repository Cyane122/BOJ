#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10845 큐 - https://www.acmicpc.net/problem/10845
 * Tier: Silver IV
 */

queue<int> q;

int main() {
    fastio;
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        string str; cin >> str;
        if(str == "push") {
            int k; cin >> k;
            q.push(k);
        } else if (str == "front") {
            cout << ((q.empty())?-1:q.front()) << endl;
        } else if (str == "back") {
            cout << ((q.empty())?-1:q.back()) << endl;
        } else if (str == "size") {
            cout << q.size() << endl;
        } else if (str == "empty") {
            cout << ((q.empty())?1:0) << endl;
        } else if (str == "pop") {
            cout << ((q.empty())?-1:q.front()) << endl;
            if(!q.empty()) q.pop();
        }
    }
    return 0;
}