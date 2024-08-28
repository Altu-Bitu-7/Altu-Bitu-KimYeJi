#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    set<string> s;
    string str;
    for(int i=0; i<n; i++) {
        cin >> str;
        s.insert(str);
    }

    int count=0;
    for(int i=0; i<m; i++) {
        cin >> str;
        if(s.find(str) != s.end()) count++;
    }

    cout << count;
    return 0;
}