#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; cin >>a >>b;

    double sum = a+b;
    double sub = a-b;

    double res = sum / sub;

    res *= 100;
    res = round(res);
    res /= 100;

    cout << res <<endl;
    return 0;
}