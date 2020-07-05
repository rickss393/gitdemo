# include <iostream>
# include <fstream>
# include <vector>
# include <string>



using namespace std;

int main(){
    string a;
    cout<<"Enter the file name: ";
    cin>>a;
    vector <string> file;
    fstream testfile(a, ios::in);
    int sum=0;
    while (!testfile.eof()) {
        string stem;
        getline(testfile,stem);        
        file.push_back(stem);
    }

    if(file.size()<10){
        for(int i=0;i<file.size();i++){
            cout<<file[i]<<endl;
        }
        cout<<"This is all the content,which is less than line.";
    }
    else{
        for(int i=0;i<10/*file.size()*/;i++)
        {
            cout<<file[i]<<endl;
        }
        cout<<"This is the first 10 line content.";
    }
    return 0;
}
/*
Enter the file name: ai.txt
No.
he said.
"no," he said.
"no," i said.
"i know," she said.
"thank you," she said.
"come with me," she said.
"talk to me," she said.
"don't worry about it," she said.
it made me want to cry.
This is the first 10 line content.

Enter the file name: ai.txt
No.
he said.
"no," he said.
"no," i said.

This is all the content,which is less than line.
*/