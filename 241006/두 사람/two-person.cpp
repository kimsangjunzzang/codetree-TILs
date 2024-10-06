#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
int cnt = 0;
    for ( int i=0;i<2;i++) {
    int num; cin >> num;
    char gender; cin >>gender;
    

    if(num >19 && gender == 'M') {
        cout << 1;
        break;
    } else {
        cnt ++;
        }
    }

    if(cnt == 2) cout << 0;
    return 0;
}