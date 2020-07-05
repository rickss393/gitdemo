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
        cout<<"This is all the content,which is "<<file.size()<<" line.";
    }
    else{
        for(int i=(file.size()-10);i<file.size();i++)
        {
            cout<<file[i]<<endl;
        }
        cout<<"This is the last 10 line content.";
    }
    return 0;
}
/*
Enter the file name: ai.txt
there is no one else in the world.
there is no one else in sight.
they were the only ones who mattered.
they were the only ones left.
he had to be with me.
she had to be with him.
i had to do this.
i wanted to kill him.
i started to cry.
i turned to him.
This is the last 10 line content.

Enter the file name: ai.txt
he had to be with me.
she had to be with him.
i had to do this.
i wanted to kill him.
i started to cry.
i turned to him.
This is all the content,which is 6 line.
*/