#include <iostream>
#include <cctype> // toupper 함수를 사용하기 위해 추가
using namespace std;

int main() {
    char ch[5][3]; // 5x3 크기의 문자 배열

    // 문자 입력
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> ch[i][j];
        }
    }

    // 대문자로 변환하여 출력
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << (char)toupper(ch[i][j]) << " ";
        }
        cout << endl;
    }
    
    return 0;
}