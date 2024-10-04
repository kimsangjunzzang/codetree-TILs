#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5;
    int b = 6;
    int c = 7;

    int tmp = b;
    b = a;
    int tmp2 = c;
    c = tmp;
    
    a = tmp2;
    cout << a <<endl;
    cout <<b<<endl;
    cout <<c <<endl;
    return 0;
}