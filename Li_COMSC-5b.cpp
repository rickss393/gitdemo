#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main(){
    string a;
    cout<<"Enter the file name: ";
    cin>>a;
    vector <string> file;
    fstream testfile("ai.txt", ios::in);
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
        for(int i=0;i<file.size();i++)
        {
            cout<<file[i]<<endl;
            if(((i+1)%24)==0){
                system ("PAUSE");
            }
        }
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
no one had seen him since.
it made me feel uneasy.
no one had seen him.
the thought made me smile.
the pain was unbearable.
the crowd was silent.
the man called out.
the old man said.
the man asked.
he was silent for a long moment.
he was silent for a moment.
it was quiet for a moment.
it was dark and cold.
there was a pause.
Press any key to continue . . . 
it was my turn.
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
*/