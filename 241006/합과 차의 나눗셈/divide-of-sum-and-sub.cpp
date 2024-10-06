#include <iostream>
#include <iomanip> // setprecision 사용을 위해 포함
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // (a + b)와 (a - b)를 계산
    double sum = a + b;
    double diff = a - b;

    // 나누기 연산 수행
    double result = sum / diff;

    // 소수점 둘째 자리까지 반올림하여 출력
    cout << fixed << setprecision(2) << result << endl;

    return 0;
}