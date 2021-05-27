#include<iostream>

using namespace std;

void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    }//This will not work for swaping the values becauase here the values are going to function as copies not the actuall one
void realSwap(int* a,int *b){
    int temp = *a;
    *a =*b;
    *b =temp ;
}
void realEasySwap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
    
}
int & realEasySwap2(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
    return a;//here we are returning the refernce of a see the example in main function
}

int main(){ 
    int a = 23;
    int b =234;
    cout<<"The value of A is "<<a<< " and that of B is "<<b<<" before using the function"<<endl;
    // swap(a,b);This is not working as we wanted it 
   //realSwap(&a,&b);//It is important to use the "&" symbol here or it will aslo not work.It will swap the values using pointers
    // realEasySwap(a,b);//This is also working but it creates an refernce at the function
    realEasySwap2(a,b) =33;//Here the value of a will be changed to a as we were returnig the refrence of a and then we cahanged it to 33
    cout<<"The value of A is "<<a<< " and that of B is "<<b<<" after using the function"<<endl;



}