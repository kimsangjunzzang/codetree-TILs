#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int>v(3);
    for ( int i=0;i<3;i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cout << v[1] <<endl;

    return 0;
}