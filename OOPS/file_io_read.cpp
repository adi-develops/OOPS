#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char st2[100];
    //string st2;
    // Opening files using constructor and reading it
    ifstream in("sample.txt"); // Read operation
    //in>>st2;
    while(in){
    in.getline(st2, 100);
    //getline(in, st2);
    cout<<st2<<endl;
    }
    return 0;
}
