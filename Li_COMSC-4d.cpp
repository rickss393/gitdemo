#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int v,t;
    cout<<"What is the speed of the vehicle in mph?";
    cin>>v;
    cout<<"For how many hours has it traveled?";
    cin>>t;
    cout<<left<<endl;
    cout<<setw(15)<<"Hours"<<"Distance Traveled in Miles"<<endl;
    cout<<"---------------------------------------";
    for(int i=0;i<t;i++)
        cout<<setw(15)<<i+1<<(i+1)*v<<endl;

    return 0;
}
/*
What is the speed of the vehicle in mph?65
For how many hours has it traveled?8

Hours          Distance Traveled in Miles
---------------------------------------1              65
2              130
3              195
4              260
5              325
6              390
7              455
8              520
*/