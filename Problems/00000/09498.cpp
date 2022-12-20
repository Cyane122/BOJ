#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 9498 시험 성적 - https://www.acmicpc.net/problem/9498
 * Tier: Bronze V
 */

using namespace std;

int main() {
    fastio;
    int A; cin >> A;
    cout << ((A>=90)?"A":((A>=80)?"B":((A>=70)?"C":((A>=60)?"D":"F"))));
    return 0;
}