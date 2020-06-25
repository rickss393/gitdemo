#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int selection;
    double r,l,w,b,h;

    cout<<"Please to enter the number to chose the area you want to calculate: \n1.rectangle\n2.triangle\n3.circle\n\n";
    cin>>selection;

    while(selection<1||selection>3){
        cout<<"warning! you input is nout valid. Re-enter you choice: ";
        cin>>selection;
    }

    if(selection==1){
        cout<<"enter the length for the rectangle: ";
        cin>>l;
        cout<<"enter the width for the rectangle: ";
        cin>>w;
        cout<<"\nThe area of the rectangle is "<<l*w;
    }
    else if(selection==2){
        cout<<"enter the base for the triangle: ";
        cin>>b;
        cout<<"enter the high for the triangle: ";
        cin>>h;
        cout<<"\nThe area of the triangle is "<<b*h/2;
    }
    else if(selection==3){
        cout<<"enter the radius for the circle: ";
        cin>>r;
        cout<<"\nThe area of the circle is "<<3.14*pow(2,r);
    }
    return 0;
}
/*
Please to enter the number to chose the area you want to calculate: 
1.rectangle
2.triangle
3.circle

0
warning! you input is nout valid. Re-enter you choice: 4
warning! you input is nout valid. Re-enter you choice: 1
enter the length for the rectangle: 4
enter the width for the rectangle: 5

The area of the rectangle is 20

Please to enter the number to chose the area you want to calculate:
1.rectangle
2.triangle
3.circle

2
enter the base for the triangle: 4
enter the high for the triangle: 5

The area of the triangle is 10

Please to enter the number to chose the area you want to calculate:
1.rectangle
2.triangle
3.circle

3
enter the radius for the circle: 2

The area of the circle is 12.56
*/