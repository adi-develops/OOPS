#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Harry bhai";
    // Opening files using constructor and writing it
    ofstream out("samplewrite.txt"); // Write operation
    out<<"USA\n"<<"UK\n"<<"North Korea";

    return 0;
}
