#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; cin >> a >> b;

    for ( int i=a;i<=b;i++) {
        if(1920 % a == 0&& 2880 % a == 0) {
            cout << 1;
            break;
        }
    }
    return 0;
}