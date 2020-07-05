#include<iostream>

using namespace std;

int main(){
    for (int i=0;i<8;i++){
        for(int n=0;n<16;n++)
            cout<<static_cast<char>(i*16+n);
        cout<<endl;
    }
    return 0;
}
/*
 !"#$%&'()*+,-./
0123456789:;<=>?
@ABCDEFGHIJKLMNO
PQRSTUVWXYZ[\]^_
`abcdefghijklmno
pqrstuvwxyz{|}~
*/