#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt =0;
    for ( int i=0;i<5;i++) {
        int num; cin >> num;
        if(num %2 == 0) cnt ++;
    }
    cout << cnt <<endl;
    return 0;
}