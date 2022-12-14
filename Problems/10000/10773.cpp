#include <bits/stdc++.h>

#define endl "\n"
/**
 * BOJ 10773 제로 - https://www.acmicpc.net/problem/10773
 */

using namespace std;

stack<int> v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int K; cin >> K;
    int k = 1, temp = 0;

    while(k <= K) {
        cin >> temp;
        if(temp == 0) {
            v.pop();
        } else {
            v.push(temp);
        }
        k++;
    }

    int sum = 0;
    for(int i = 1; !v.empty(); i++) {
        sum+=v.top();
        v.pop();
    }

    cout << sum;

    return 0;
}