#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a; cin >> a;
    vector<int>v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];

    for ( int i=0;i<4;i++) {
        if(v[i] < a) cout << 1 <<endl;
        else cout <<0<<endl;
    }
    return 0;
}