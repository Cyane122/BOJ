#include <bits/stdc++.h>

using namespace std;

struct member {
    int age;
    int num;
    string name;
};

member members[100001];

bool amp(member &members1, member &members2) {
    if(members1.age < members2.age) return true;
    else if (members1.age > members2.age) return false;
    else {
        if(members1.num < members2.num) return true;
        else return false;
    }
}

int main() {
    int N; cin >> N;

    for(int i = 0; i < N; i++) {
        int age; string name; cin >> age >> name;
        members[i] = {age, i, name};
    }

    sort(members, members+N, amp);

    for(int i = 0; i < N; i++) {
        cout << members[i].age << " " << members[i].name << "\n";
    }

    return 0;
}