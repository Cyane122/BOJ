#include <bits/stdc++.h>

#define endl "\n"
/**
 * BOJ 10773 제로 - https://www.acmicpc.net/problem/10773
 */

using namespace std;

stack<int> s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int K; cin >> K;
    int k = 1, temp = 0;

    while(k <= K) {
        cin >> temp;
        if(temp == 0) {
            s.pop();
        } else {
            s.push(temp);
        }
        k++;
    }

    int sum = 0;
    for(int i = 1; !s.empty(); i++) {
        sum+=s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}