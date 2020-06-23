#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    double A,B,C,total;

    cout<<"Enter the number of A ticket you sold: ";
    cin>>A;
    cout<<"Enter the number of B ticker you sold: ";
    cin>>B;
    cout<<"Enter the number of C ticket you sold: ";
    cin>>C;
    total=(A*15)+(B*12)+(C*9);
    cout<<"\nThe total amount of income from selling ticket is $"<< fixed << setprecision(2) << total;


    return 0;
}
/*
Enter the number of A ticket you sold: 3
Enter the number of B ticker you sold: 4
Enter the number of C ticket you sold: 5

The total amount of income from selling ticket is $138.00
*/