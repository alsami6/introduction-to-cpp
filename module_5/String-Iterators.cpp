#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello";
    // for(int i = 0; i < s.size(); i++){
    //     cout<< s[i] << endl;
    // }


    for(auto it = s.begin() ; it < s.end() ; it++ ){
        cout << *it << endl;
    }


    return 0;
}