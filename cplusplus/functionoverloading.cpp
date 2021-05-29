#include<iostream>


using namespace std;
int add(int a , int b){

    return a+b;
}
int add(int a , int b,int c){

    return a+b+c;
}
int add(int a , int b,int c ,int d){

    return a+b+c+d;
}

int main(){
cout<<"The sum of 2 and 3 is "<<add(2,3)<<endl;
cout<<"The sum of 2,5 and 3 is "<<add(2,3,5)<<endl;
cout<<"The sum of 2,5,6 and 3 is "<<add(2,3,5,6)<<endl;

}