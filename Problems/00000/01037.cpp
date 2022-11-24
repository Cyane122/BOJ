#include <bits/stdc++.h>
/**
 * #01037 약수 https://www.acmicpc.net/problem/1037
 */

using namespace std;

int main() {

    int N; cin >> N;
    int MAX = 1, MIN = 1000001;
    for(int i = 0; i < N; i++) {
        int M; cin >> M;
        MAX = max(MAX, M);
        MIN = min(MIN, M);
    }
    cout << MAX*MIN;

    return 0;
}