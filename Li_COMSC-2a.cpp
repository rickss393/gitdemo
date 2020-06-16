# include <iostream>

using namespace std;

int main(){
    double gas_holding,travel_distance,gas_mileage;

    cout<<"Please enter how much gasline your tank can hold on your car in gal:";
    cin>>gas_holding;
    cout<<"Please enter how long your car traveled before it refuel again:";
    cin>>travel_distance;
    gas_mileage=travel_distance/gas_holding;
    cout<<"\nYour car's gas mileage is "<<gas_mileage<<" MPG";
    return 0;
}