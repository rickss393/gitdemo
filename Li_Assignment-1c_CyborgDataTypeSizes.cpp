# include <iostream>
# include <iomanip>

using namespace std;

int main(){

    cout<<left;
    cout<<setw(10)<<"char"<<1<<endl
        <<setw(10)<<"int"<<4<<endl
        <<setw(10)<<"float"<<4<<endl
        <<setw(10)<<"double"<<8<<endl;


    return 0;

}