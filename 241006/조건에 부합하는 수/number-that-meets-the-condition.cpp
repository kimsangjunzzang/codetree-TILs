#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a; cin >> a;
    
    for ( int i=1;i<=a;i++) {
        if(i % 2 ==0 && i % 4 !=0) continue;
        int num = i / 8;
        if(num % 2 == 0 ) continue;
        num = i % 7;
        if(num< 4) continue;

        cout << i <<" ";
    }
    return 0;
}