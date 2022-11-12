#include <bits/stdc++.h>

using namespace std;

struct code {
    int x;
    int y;
};

code codes[100001];

bool amp(code &code1, code &code2) {
    if(code1.x > code2.x) return false;
    else if (code1.x < code2.x) return true;
    else {
        if(code1.y > code2.y) return false;
        else return true;
    }
}

int main() {

    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        codes[i] = {x, y};
    }

    sort(codes, codes+N, amp);

    for(int i = 0; i < N; i++) {
        cout << codes[i].x << " " << codes[i].y << "\n";
    }

    return 0;
}