#include <bits/stdc++.h>

#define endl "\n"
/**
 * BOJ 11866 요세푸스 문제 0 - https://www.acmicpc.net/problem/11866
 */

using namespace std;

vector<int> people;
vector<int>::iterator it;
vector<int> res;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K; cin >> N >> K;
    int r = K;
    for(int i = 1; i <= N; i++) people.push_back(i);

    it = people.begin();
    it += r;
    cout << "<";
    while(!people.empty()) {
        res.push_back(r);
        N--;
        cout << r;
        people.erase(it);
        if(N != 0) {
            cout << ", ";
        } else break;
        it += K;
        if(it > people.end()) it -= N;
    }
    cout << ">";

    return 0;
}