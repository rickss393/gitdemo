#include<iostream>
#include<iomanip>
#include <cstdlib>
#include<ctime> 

using namespace std;

int main(){
    srand((unsigned)time(0));
    int a=rand() % 1000,b=rand() % 1000,c;
    cout<<setw(6)<<a<<endl
        <<"+"<<setw(5)<<b<<endl
        <<"---------\n";

    cout<<"\n\nenter your answer here: "; 
    cin>>c;

    if((a+b)==c)
        cout<<"Good job you have the correct answer.";
    else
        cout<<"You are incorrect, the correct answer is "<<a+b;
    
    
    
    return 0;
}
/*
   738
+   58
---------


enter your answer here: 796
Good job you have the correct answer.

   862
+  282
---------


enter your answer here: 6
You are incorrect, the correct answer is 1144
*/