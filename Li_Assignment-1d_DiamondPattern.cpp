# include <iostream>

using namespace std;

int main(){

    for(int i=0;i<5;i++){
        for(int n=0;n<(7-i);n++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=3;i>0;i--){

        for(int n=0;n<(7-i);n++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}
/*
      *
     ***
    *****
   *******
    *****
     ***
      *
*/