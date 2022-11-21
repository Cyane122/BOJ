#include <bits/stdc++.h>
/**
 * #10250 ACM 호텔 - https://www.acmicpc.net/problem/10250
 */

using namespace std;

int main() {
    int H, W, N, T; cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        int A, B;
        N--;
        A = N / H + 1;
        B = N % H + 1;
        cout << B << ((A>9) ? "": ("0")) << A << '\n';
    }
}