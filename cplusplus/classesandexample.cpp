#include<iostream>
using namespace std;

class test{

    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1, int b1, int c1);//This is a function just to declare these three values namely a1,b1,c1
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }

};
void test::setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;

};

int main(){
    test name;
    name.d=12;
    name.e = 23;
    name.setData(123,234,345);
    name.getData();

}