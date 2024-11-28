#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int roll;
    int math;
    int english;

    student(string name,int roll, int math, int english){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of " << name << " = " << math+english << endl;
    }
};


int main(){
    student sami("Al Sami", 23, 67, 78);
    student sakib("Rakib Al Shakib", 25, 89, 98);
    
    sami.total();
    sakib.total();

    return 0;
}