#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt =0;
    for ( int i=0;i<5;i++) {
        int num; cin >> num;
        if(num % 3 != 0) cnt++;
    }
    if (cnt ==0) cout <<1;
    else cout << 0; 
    return 0;
}