#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double F,C;
    cout<<"Enter the temperature in Celsius: ";
    cin>>C;    
    F=C*9/5+32;

    cout<<fixed<<setprecision(2)<<F<<"degrees Fahrenheit.";


    return 0;
}
/*
Enter the temperature in Celsius: 76
168.80degrees Fahrenheit.
*/