# include <iostream>
# include <iomanip>

using namespace std;

int main(){
    double gas_holding,travel_distance,gas_mileage;

    cout<<"Please enter how much gasline your tank can hold on your car in gal:";
    cin>>gas_holding;
    cout<<"Please enter how long your car traveled before it refuel again:";
    cin>>travel_distance;
    gas_mileage=travel_distance/gas_holding;
    cout<<"\nYour car's gas mileage is "<<fixed<<setprecision(2)<<gas_mileage<<" MPG";
    return 0;
}
/*
Please enter how much gasline your tank can hold on your car in gal:12
Please enter how long your car traveled before it refuel again:350

Your car's gas mileage is 29.17 MPG
*/