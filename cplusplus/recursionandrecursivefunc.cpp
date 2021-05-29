#include<iostream>


using namespace std;
int factorial(int n){
    if (n <= 1){
        return 1;
    }
    // cout<<n<<endl; 
    return n * factorial(n-1);//This is what we call a recursive function! 

}
int fibonaci(int n){

    if (n<2){
        return 1;

    }
    return fibonaci(n-2) + fibonaci(n-1);
}

int main(){
    float a;
    //Factorial of a number is for eg. 6! = 6*5*4*3*2*1 = 720, also 0! = 1(by defenation)
    // also n!  = n*(n-1)!
    // cout<<"Enter the number who's factorial you want below "<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a <<"is "<<factorial(a)<<endl;
    cout<<"The teram at  "<<a <<" position in fibonaci seriers is "<<fibonaci(a)<<endl;


}