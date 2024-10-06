#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int testCase; cin>> testCase;
    for (int i=0;i<testCase;i++) {
        int num; cin >> num;
        if(num %2 ==1 && num %3 ==0) cout << num<<endl;
    }
    return 0;
}