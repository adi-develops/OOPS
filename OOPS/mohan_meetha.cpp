#include <iostream>

using namespace std;

int main()

{

int count=0,i=0;

char c[1000];

int line=1,words=1;

cout<<"INPUT TEXT \n";

cin.get( c[0] );

while ( c[i]!='#' )

{

count++;

if(c[i]=='\n' || c[i]=='‘' || c[i]=='\t')

words++;

if(c[i]=='\n')

line++;

i++;

cin.get( c[i] );

}

cout<< "\n Number of characters =" <<count <<"\nwords="<<words<<"\nline="<<line;

return 0;

}