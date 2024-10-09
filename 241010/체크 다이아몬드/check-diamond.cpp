#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    // 위쪽 절반
    for (int i = 1; i <= n; i++) {
        // 공백 출력
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // 별 출력 (별과 별 사이에 공백)
        for (int j = 0; j < i; j++) {
            cout << "*";
            if (j != i - 1) { // 마지막 별 뒤에는 공백을 출력하지 않음
                cout << " ";
            }
        }
        cout << endl;
    }

    // 아래쪽 절반
    for (int i = n - 1; i >= 1; i--) {
        // 공백 출력
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // 별 출력 (별과 별 사이에 공백)
        for (int j = 0; j < i; j++) {
            cout << "*";
            if (j != i - 1) { // 마지막 별 뒤에는 공백을 출력하지 않음
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}