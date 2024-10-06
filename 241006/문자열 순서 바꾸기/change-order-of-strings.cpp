#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<string>v(2);
    for ( int i=0;i<2;i++) {
         cin>> v[i];
    }
    cout <<v[1] <<endl;
    cout <<v[0];
    return 0;
}