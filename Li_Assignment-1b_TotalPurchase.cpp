# include <iostream>

using namespace std;

int main (){

    double a=15.95,b=24.95,c=6.95,d=12.95,e=3.95;
    cout<<"item 1:"<<a<<endl
        <<"item 2:"<<b<<endl
        <<"item 3:"<<c<<endl
        <<"item 4:"<<d<<endl
        <<"item 5:"<<e<<endl
        <<"Subtotal:"<<a+b+c+d+e<<endl
        <<"Sales tax:"<<(a+b+c+d+e)*0.07<<endl
        <<"Total:"<<(a+b+c+d+e)*0.07+a+b+c+d+e;

    return 0;
}