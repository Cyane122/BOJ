#include <bits/stdc++.h>
/**
 * #05086 배수와 약수 https://www.acmicpc.net/problem/5086
 */
using namespace std;

int main() {
    int N, M;
    do {
        cin >> N >> M;
        if(N == M) break;
        cout << ((N%M == 0)? "multiple" : ((M%N == 0)? "factor": "neither")) << "\n";
    } while(N != M);

    return 0;
}