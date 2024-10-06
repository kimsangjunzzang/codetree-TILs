#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >>num;
    if(num >= 3000) cout << "book";
    else if(num >= 1000) cout <<"mask";
    else cout <<"no";
    return 0;
}