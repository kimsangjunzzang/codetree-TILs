#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 1;
    int b = 2;
    int c = 3;

    int tmpa = a;
    int tmpb = b;
    int tmpc = c;

    a = tmpa + tmpb + tmpc;
    b = tmpa + tmpb + tmpc;
    c = tmpa + tmpb + tmpc;

    cout << a <<" "<<b<< " "<<c<<endl;

    return 0;
}