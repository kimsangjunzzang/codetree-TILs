#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    double avg = 0;
    int i = 0;
    while(cin >> num) {
        if(num >29) break;
        avg += num;
        i++;

    }
    cout << fixed;
	cout.precision(2);
    cout << avg / i <<endl;
    return 0;
}