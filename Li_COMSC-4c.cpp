#include<iostream>

using namespace std;

int main(){

    cout<<"pattern A";
    for(int i=0;i<11;i++){
        for(int n=0;n<i;n++)
            cout<<"+";
        cout<<endl;
    }
    cout<<"\npattern B"<<endl;
    for(int i=10;i>0;i--){
        for(int n=0;n<i;n++)
            cout<<"+";
        cout<<endl;
    }
    return 0;
}
/*
pattern A
+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++

pattern B
++++++++++
+++++++++
++++++++
+++++++
++++++
+++++
++++
+++
++
+
*/