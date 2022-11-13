#include <bits/stdc++.h>

using namespace std;

int main() {
    int H, W, N, T; cin >> T;
    // H 높이, W 너비, N 손님


    for(int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        int A, B;
        /*
        A = N%H;
        B = N/H + 1;
        if(A == 0) cout << H << ((N/H > 8)?"":"0") << N/H + 1 << "\n";
        else cout << A << ((B>9) ? "": ("0")) << B << '\n';
         */
        N--;
        A = N / H + 1;
        B = N % H + 1;
        cout << A << ((B>9) ? "": ("0")) << B << '\n'; // TODO
    }
}