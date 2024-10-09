#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;  // 정수 n 입력

    vector<int> numbers(n);  // n개의 정수를 저장할 벡터
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];  // n개의 정수를 입력받음
    }

    vector<int> evens;  // 짝수를 저장할 벡터
    for (int i = n - 1; i >= 0; i--) {  
        if (numbers[i] % 2 == 0) {
            evens.push_back(numbers[i]);  // 짝수일 경우 벡터에 추가
        }
    }

    // 짝수들 출력
    for (int i = 0; i < evens.size(); i++) {
        cout << evens[i] << " ";
    }
    cout << endl;

    return 0;
}