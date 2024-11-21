#include<bits/stdc++.h>
using namespace std;

class student {
    public: 
    int roll;
    int cls;
    double gpa;

    
};


int main(){
    student sami;
    sami.roll = 26;
    sami.cls = 5;
    sami.gpa = 3.28;  

    student tanmin;
    tanmin.roll = 23;
    tanmin.cls = 5;
    tanmin.gpa = 5.00;


    cout << sami.roll << " " << sami.cls << " " << sami.gpa << endl;
    cout << tanmin.roll << " " << tanmin.cls << " " << tanmin.gpa << endl;

    return 0;
}