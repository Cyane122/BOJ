#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1676 팩토리얼 0의 개수 - https://www.acmicpc.net/problem/1676
 * Tier: Silver 5
 */

using namespace std;

int get2(int i) {
    if(i%2 == 0) return 1 + get2(i/2);
    else return 0;
}

int get5(int i) {
    if(i%5 == 0) return 1 + get5(i/5);
    else return 0;
}

int main() {
    fastio;

    int N; cin >> N;
    int c2 = 0, c5 = 0;
    for(int i = 1; i <= N; i++) {
        if(i%2 == 0) c2 += get2(i);
        if(i%5 == 0) c5 += get5(i);
    }

    cout << min(c2, c5);

    return 0;
}