#include<iostream>
#include<iomanip>
#include <cstdlib>
#include<ctime> 

using namespace std;

int main(){
    srand((unsigned)time(0));
    int a=rand() % 1000,b=rand() % 1000;
    cout<<setw(6)<<a<<endl
        <<"+"<<setw(5)<<b<<endl
        <<"---------\n";
    system("pause");
    cout<<"\n\n"<<setw(6)<<a<<endl
        <<"+"<<setw(5)<<b<<endl
        <<"---------\n"; 
    cout<<setw(6)<<a+b<<endl;

    
    return 0;
}
/*
   930
+  268
---------
Press any key to continue . . . 


   930
+  268
---------
  1198
PS C:\Users\Rick\Documents\gitdemo> 
*/
/*
    41
+  266
---------
Press any key to continue . . .


    41
+  266
---------
   307
PS C:\Users\Rick\Documents\gitdemo>
*/