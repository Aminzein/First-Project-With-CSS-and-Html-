#include <iostream>
#include <string>
using namespace std;
int main(){
    int k;cin >> k;
    string num = "";
    for(int i = 1;i<=k;i++){
        num += to_string(i);
    }
    cout << num[k-1];
}