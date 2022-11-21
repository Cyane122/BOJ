#include <bits/stdc++.h>
/**
 * #02869 달팽이는 올라가고 싶다 - https://www.acmicpc.net/problem/2869
 */

using namespace std;

int main() {
    int A, B, V, N, T;
    cin >> A >> B >> V;

    N = (V-A+(A-B))/(A-B);
    T = (V-A+(A-B))%(A-B);

    (T==0) ? cout << N : cout << N+1;

    return 0;
}
/*
 * 하루에 A-Bm 올라가고 / V - D(B-A) <= A면 상황 종료 1일 전 / 즉 V-A <= D(B-A) -> (V-A)/(B-A) <= D
 *
 *
 */