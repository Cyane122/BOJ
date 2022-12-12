#include <bits/stdc++.h>

#define endl "\n"
/**
 * BOJ 9184 신나는 함수 실행 -  https://www.acmicpc.net/problem/9184
 * 그... 안신나는데...? #unfinished
 */

using namespace std;

int v[101][101][101];

int w(int a, int b, int c) {
    if(v[a+50][b+50][c+50] != 0) return v[a+50][b+50][c+50];
    if(a <= 0 && b <= 0 && c <= 0) {
        v[a+50][b+50][c+50] = 1;
        return 1;
    }
    if(a > 20 && b > 20 && c > 20) return w(20, 20, 20);
    else {
        if (a < b && b < c) return w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
        else return w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int p = 0, q = 0, r = 0;
    while(p != -1 && q != -1 && r != -1) {
        cin >> p >> q >> r;
        cout << "w(" << p << ", " << q << ", " << r << ") = " << w(p, q, r) << endl;
    }

    return 0;
}