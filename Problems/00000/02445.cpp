#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2445 별 찍기 - 8 - https://www.acmicpc.net/problem/2445
 * Tier: Bronze III
 */

int N;

int main() {
    fastio;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < i; j++) cout << "*";
        for(int j = 0; j < 2*(N-i); j++) cout << " ";
        for(int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
    for(int i = N-1; i > 0; i--) {
        for(int j = 0; j < i; j++) cout << "*";
        for(int j = 0; j < 2*(N-i); j++) cout << " ";
        for(int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
    return 0;
}