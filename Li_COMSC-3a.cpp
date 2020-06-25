#include<iostream>

using namespace std;

int main(){

    double L1,L2,W1,W2;

    cout<<"enter the length for the first rectangle: ";
    cin>>L1;
    cout<<"enter the width for the first rectangle: ";
    cin>>W1;

    cout<<"enter the length for the second rectangle: ";
    cin>>L2;
    cout<<"enter the width for the second rectangle: ";
    cin>>W2;

    if((L1*W1)<(L2*W2))
        cout<<"The second rectangle has a larger area.";
    else if((L1*W1)==(L2*W2))
        cout<<"Both rectangle has the same amount of area.";
    else if((L1*W1)>(L2*W2))
        cout<<"The first rectangle has a larger area";
    return 0;
}
/*
enter the length for the first rectangle: 4
enter the width for the first rectangle: 3
enter the length for the second rectangle: 5
enter the width for the second rectangle: 2
The first rectangle has a larger area

enter the length for the first rectangle: 5
enter the width for the first rectangle: 2
enter the length for the second rectangle: 4
enter the width for the second rectangle: 3
The second rectangle has a larger area.

enter the length for the first rectangle: 5
enter the width for the first rectangle: 2
enter the length for the second rectangle: 2
enter the width for the second rectangle: 5
Both rectangle has the same amount of area.
*/