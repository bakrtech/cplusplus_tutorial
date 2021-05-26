#include<iostream>
//Headers are of two types i,e
// 1 comes with compieler 
// 2 user defined 
// #include "test.h" // This is the way to add a user defined headers
using namespace std;

int main(){
    int a =23, b =34;
    cout<<"Head and oppereators";
    // Following type s of opereators
    // Arthematic opp
    cout<<a+b<<"\n"<<a-b<<"\n"<<a/b<<"\n"<<a*b<<"\nzxz"<<a%b<<"\n"<<a++<<"\n"<<a--<<"\n"<<++a<<"\n"<<--a;
    //asisigment opp
    int z =23;
    char d ='s';
    //Comparison opp
    cout<<endl;
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"The vallue of a==b is "<<(a==b)<<endl;
    cout<<"The vallue of a!=b is "<<(a!=b)<<endl;
    cout<<"The vallue of a<=b is "<<(a<=b)<<endl;
    cout<<"The vallue of a>=b is "<<(a>=b)<<endl;
    cout<<"The vallue of a<b is "<<(a<b)<<endl;
    cout<<"The vallue of a>b is "<<(a>b)<<endl;
   
    //logical opp
    cout<<endl;
    cout<<endl;
    cout<<"The value of a<b && a>b "<<((a<b)&&(a>b))<< endl;
    cout<<"The value of a<b || a>b "<<((a<b)||(a>b))<< endl;
    cout<<"The value of ! a<b    "<<(!(a<b))<< endl;

    //After this comes Bitwise opp
     return 0;
}