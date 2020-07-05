# include <iostream>
# include <fstream>
# include <vector>


using namespace std;

int main(){
    vector <int> file;
    fstream testfile("n.txt", ios::in);
    int sum=0;
    while (!testfile.eof()) {
        int stem;
        testfile >> stem;
        sum+=stem;
        file.push_back(stem);
    }
    cout<<"read n.txt file."<<endl;
    cout<<"Amount of numbers: "<<file.size()<<endl;
    cout<<"Sum of numbers: "<<sum<<endl;
    cout<<"Avg of all numbers: "<<static_cast<double>(sum)/file.size();
    return 0;
}

/*
read n.txt file.
Amount of numbers: 200
Sum of numbers: 105527
Avg of all numbers: 527.635
*/