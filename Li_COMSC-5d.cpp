# include <iostream>
# include <fstream>
# include <vector>
# include <string>

using namespace std;

int main(){
    string a,b;
    cout<<"Enter the file name: ";
    cin>>a;
    cout<<"enter the key word:";
    cin>>b;
    vector <string> file;
    fstream testfile(a, ios::in);
    int sum=0;
    while (!testfile.eof()) {
        string stem;
        getline(testfile,stem);        
        file.push_back(stem);
    }

    int n=0; 

    for(int i=0;i<file.size();i++){
        bool match = file[i].find(b) < file[i].length();
        if(match){
            cout<<i+1<<" "<<file[i]<<endl;
            n++;
        }
    }
    if(n==0)
        cout<<"Key word you enter does not appear in this context";
    else
        cout<<"This word you enter appear in the context for "<<n<<" times";
    return 0;
}
/*
Enter the file name: ai.txt
enter the key word:moment
20 he was silent for a long moment.
21 he was silent for a moment.
22 it was quiet for a moment.
This word you enter appear in the context for 3 times

Enter the file name: ai.txt
enter the key word:she
5 "i know," she said.
6 "thank you," she said.
7 "come with me," she said.
8 "talk to me," she said.
9 "don't worry about it," she said.
31 she had to be with him.
This word you enter appear in the context for 6 times
*/