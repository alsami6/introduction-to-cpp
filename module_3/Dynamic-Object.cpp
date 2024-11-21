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

int main(){
    student abir(2,4,4.43);
    student* tabassum = new student(10,5,4.56);

    cout << tabassum->roll << " " << tabassum->cls << " " << tabassum->gpa << endl;


    return 0;
}