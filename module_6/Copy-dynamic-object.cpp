#include<bits/stdc++.h>
using namespace std;

class Cricketer{
public:
    string country;
    int jersey;
    Cricketer(string country, int jersey){
        this->country = country;
        this->jersey = jersey;  
    }
};


int main(){
    Cricketer* dhoni = new Cricketer("India",100);
    Cricketer* kholi = new Cricketer("India",18);

    kholi->country = dhoni->country;
    kholi->jersey = dhoni->jersey;


    // cout << dhoni->jersey << endl;

    delete dhoni;

    cout << kholi->jersey << " " << kholi->country << endl;

    return 0;
}