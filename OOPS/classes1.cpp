#include<iostream>
using namespace std;

/* class name{
    definition
}harry, rahul, adrak; <---objects can be initialized here*/
typedef class employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setdata(int a1, int b1, int c1);
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;   
        }
}emp;// typedef is for this alias

void employee :: setdata(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    emp adi;
    adi.d=245;
    adi.e=653;
    adi.setdata(1,2,3);
    adi.getdata();
return 0;
}