#include<iostream>
#include<iomanip>
#include <cstdlib>
#include<ctime> 

using namespace std;

int main(){

    int selection;

    while(selection!=5){
    cout<<"Math Tutor Menu\n"
        <<"--------------------\n"
        <<"1. Addition problem\n"
        <<"2. Subtraction problem\n"
        <<"3. Multiplication problem\n"
        <<"4. Division problem\n"
        <<"5. Quit this program\n"
        <<"--------------------\n"
        <<"Enter your choice (1-5): ";

    cin>>selection;
    cout<<"\n";
    while(selection<1||selection>5){
        cout<<"enter a valid selection:";
        cin>>selection;
    }
    cout<<right;
    srand((unsigned)time(0));
    int a=rand() % 1000,b=rand() % 1000,c;

    if(selection==1){
        cout<<setw(6)<<a<<endl
            <<"+"<<setw(5)<<b<<endl
            <<"---------\n";

        cout<<"\n\nenter your answer here: "; 
        cin>>c;

        if((a+b)==c)
            cout<<"Good job you have the correct answer.";
        else
            cout<<"You are incorrect, the correct answer is "<<a+b;

        }
    else if(selection==2){
         cout<<setw(6)<<a<<endl
            <<"-"<<setw(5)<<b<<endl
            <<"---------\n";

        cout<<"\n\nenter your answer here: "; 
        cin>>c;

        if((a-b)==c)
            cout<<"Good job you have the correct answer.";
        else
            cout<<"You are incorrect, the correct answer is "<<a-b;

        }     
    else if(selection==3){
         cout<<setw(6)<<a<<endl
            <<"*"<<setw(5)<<b<<endl
            <<"---------\n";

        cout<<"\n\nenter your answer here: "; 
        cin>>c;

        if((a*b)==c)
            cout<<"Good job you have the correct answer.";
        else
            cout<<"You are incorrect, the correct answer is "<<a*b;

        }     
    else if(selection==4){
         cout<<setw(6)<<a<<endl
            <<"/"<<setw(5)<<b<<endl
            <<"---------\n";

        cout<<"\n\nenter your answer here: "; 
        cin>>c;

        if((a/b)==c)
            cout<<"Good job you have the correct answer.";
        else
            cout<<"You are incorrect, the correct answer is "<<a/b;

        }
    else if(selection==5)
        break;

    } 
    return 0;
}
/*
Math Tutor Menu
--------------------
1. Addition problem
2. Subtraction problem
3. Multiplication problem
4. Division problem
5. Quit this program
--------------------
Enter your choice (1-5): 7

enter a valid selection:8
enter a valid selection:1
   934
+  993
---------


enter your answer here: 1927
Good job you have the correct answer.Math Tutor Menu
--------------------
1. Addition problem
2. Subtraction problem
3. Multiplication problem
4. Division problem
5. Quit this program
--------------------
Enter your choice (1-5): 2

   316
-  605
---------


enter your answer here: -289
Good job you have the correct answer.Math Tutor Menu
--------------------
1. Addition problem
2. Subtraction problem
3. Multiplication problem
4. Division problem
5. Quit this program
--------------------
Enter your choice (1-5): 3

   470
*  260
---------


enter your answer here: 122200
Good job you have the correct answer.Math Tutor Menu
--------------------
1. Addition problem
2. Subtraction problem
3. Multiplication problem
4. Division problem
5. Quit this program
--------------------
Enter your choice (1-5): 4

   532
/  872
---------


enter your answer here: 0
Good job you have the correct answer.Math Tutor Menu
--------------------
1. Addition problem
2. Subtraction problem
3. Multiplication problem
4. Division problem
5. Quit this program
--------------------
Enter your choice (1-5): 5

PS C:\Users\Rick\Documents\gitdemo>
*/