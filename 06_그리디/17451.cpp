#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    vector<long long> v;
    
    // 입력
    cin >> n;
    while(n--) {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    
    // 연산
    long long answer = 0;
    for(auto it=v.end()-1; it>=v.begin(); it--){
        if (*it > answer) {
            answer = *it;
        } else if (*it < answer) {
            if (answer % *it == 0) continue;
            else answer = ((answer / *it) + 1) * *it;
        }
    }
    
    // 출력
    cout << answer;
    
    return 0;
}