#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str; cin >>str;
    string sum = "";
    vector<string>v;
    

    for ( int i=0;i<=str.size();i++) {
        if(str[i] == '-' || i == str.size()){
            v.push_back(sum);
            sum = "";
        }
        else {
            sum += str[i];
        }
    }
    cout <<v[0]<<"-"<<v[2]<<"-"<<v[1]<<endl;
    return 0;
}