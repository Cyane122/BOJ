/*#include <iostream>
#include <algorithm>

using namespace std;
int A[10001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    int m = 0;
    for(int i = 0; i < N; i++) {
        int k; cin >> k;
        A[k]++;
        m = max(m, k);
    }

    for(int i = 1; i < m+1; i++) {
        if(A[i] != 0) {
            for(int j = 0; j < A[i]; j++) cout << i << "\n";
        }
    }

    return 0;
}*/