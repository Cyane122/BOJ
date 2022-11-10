/*#include <iostream>
#include <algorithm>

using namespace std;

int A[100001];

int main() {
    int N, S;
    cin >> N >> S;
    A[0] = 0;

    for(int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int len = N + 1;

    for(int i = 1, j = 1, sum = 0; i <= N; i++) {
        while(j <= N && sum < S) {
            sum += A[j];
            j++;
        }
        if(sum >= S) {
            len = min(j-i, len);
        }
        sum -= A[i];
    }

    if(len == N+1) len = 0;
    cout << len;

    return 0;
}*/