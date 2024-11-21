#include<bits/stdc++.h>
using namespace std;

class student {
    public: 
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

student *fun(){
    student abir(2,4,4.43);
    student *p = &abir;
    return p;
}


int main(){
    student *p = fun();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;

    return 0;
}