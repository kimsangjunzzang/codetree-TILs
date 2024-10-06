#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;
    for ( int i=0;i<num;i++) {

        for ( int j =i*2+1;j>0;j-- ){
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}