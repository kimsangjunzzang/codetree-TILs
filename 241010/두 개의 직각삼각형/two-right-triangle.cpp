#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 첫 번째 줄은 *를 2 * n개 출력
    for (int i = 0; i < 2 * n; i++) {
        cout << "*";
    }
    cout << endl;

    // 두 번째 줄부터는 대칭 구조로 출력
    for (int i = 1; i < n; i++) {
        // 왼쪽 별 출력
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        
        // 가운데 공백 출력
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        
        // 오른쪽 별 출력
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}