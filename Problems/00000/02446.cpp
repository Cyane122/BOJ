#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2446 별 찍기 - 9 - https://www.acmicpc.net/problem/2446
 * Tier: Bronze III
 */

int N;

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < i; j++) cout << " ";
        for(int j = 0; j < 2*(N-i)-1; j++) cout << "*";
        cout << endl;
    }
    for(int i = N-2; i >= 0; i--) {
        for(int j = 0; j < i; j++) cout << " ";
        for(int j = 0; j < 2*(N-i)-1; j++) cout << "*";
        cout << endl;
    }
    return 0;
}