#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int A[1001];
    int N; cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    sort(A, A+N);

    for(int i = 0; i < N; i++) cout << A[i] << "\n";

    return 0;
}