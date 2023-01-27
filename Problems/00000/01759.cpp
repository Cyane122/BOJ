#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1759 암호 만들기 - https://www.acmicpc.net/problem/1759
 * Tier: Gold V
 */

string str; int L, C, J = 0, M = 0; vector<char> v, r;

void DFS(int n) {
    if(r.size() == L) {
        for(char c: r) {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') M++;
            else J++;
        }
        if(J >= 2 && M >= 1) {
            for(char c: r) cout << c;
            cout << endl;
        }
        J = 0; M = 0;
        return;
    }
    for(int i = n+1; i < v.size(); i++) {
        r.push_back(v[i]);
        DFS(i);
        r.pop_back();
    }
}

int main() {
    fastio;
    cin >> L >> C;
    for(int i = 0; i < C; i++) {
        char k; cin >> k; v.push_back(k);
    }
    sort(v.begin(), v.end());
    DFS(-1);
    return 0;
}