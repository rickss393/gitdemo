#include<iostream>
#include<string>

using namespace std;

int main(){

    double time[3];
    string runner[3];


    for(int i=0;i<3;i++){
        cout<<"enter the name for the "<<i+1<<"st runner: ";
        getline(cin,runner[i]);

        cout<<"enetr the finish time for the "<<i+1<<"st runner: ";
        cin>>time[i];
        cin.ignore();
    }
    string tem;
    for(int i=0;i<2;i++){
        for(int j=i;j<2;j++)
            if(time[i]>time[j+1]){
                swap(time[i],time[j+1]);
                tem=runner[i];
                runner[i]=runner[j+1];
                runner[j+1]=tem;         
            }

    }

    for(int i=0;i<3;i++){
        cout<<"The "<<i+1<<"st place is "<<runner[i]<<endl;
    }
    return 0;
}
/*
enter the name for the 1st runner: f p
enetr the finish time for the 1st runner: 1
enter the name for the 2st runner: s p
enetr the finish time for the 2st runner: 5
enter the name for the 3st runner: t p
enetr the finish time for the 3st runner: 9
The 1st place is f p
The 2st place is s p
The 3st place is t p

enter the name for the 1st runner: s p
enetr the finish time for the 1st runner: 6
enter the name for the 2st runner: f p
enetr the finish time for the 2st runner: 1
enter the name for the 3st runner: t p
enetr the finish time for the 3st runner: 9
The 1st place is f p
The 2st place is s p
The 3st place is t p

enter the name for the 1st runner: t p
enetr the finish time for the 1st runner: 7
enter the name for the 2st runner: f p
enetr the finish time for the 2st runner: 3
enter the name for the 3st runner: s p
enetr the finish time for the 3st runner: 3.5
The 1st place is f p
The 2st place is s p
The 3st place is t p
*/