#include<iostream>


using namespace std;

// inline int prodouct(int a,int b){return a*b;}// The inline helps the command to work faster when we use command many times
// // What inline does is that it replaces the function with actual code inside the function and then it runs it 
// // It is only recomended for function wich are small as if the big func will be inline there would be more memory intake
int prodouct(int a,int b)
{
    static int c = 0;// What static does is that it runs only when the function is ran for the first time and after that it does'nt run and in this case after first run it holds the value of c and adds 1 to it every time

    c = c+1;
    return a*b+c;

}
float gainSubs(int current_sub, int growthRate = 100){//Here as we have initlized the value of the growth so we don't need to enter if it is of same value but if in some condition we want that to be increased we will enter it 
    return current_sub +growthRate;
}
float realGainSubs(const int current_sub, int growthRate = 100){//The const will just ensure that the value of current_sub or what ever is given does'nt change inside the function , program etc,

    return current_sub +growthRate;
}
int main()
{
    int current_subs = 10;
    cout<<"If you have "<<current_subs<<" and you work hard then after one month you should have "<<gainSubs(current_subs)<<endl;
    cout<<"If you have "<<current_subs<<" and you don't work hard then after one month you should have "<<gainSubs(current_subs,0)<<endl;
    cout<<"If you have "<<current_subs<<" and you frezze one month you should have "<<realGainSubs(current_subs)<<endl;
//     int a; 
//     int b;
// cout<<"Enter Number one"<<endl;
// cin>>a;

// cout<<"Enter Number two"<<endl;
// cin>>b;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;
// cout<<"The prodouct of a and b is "<<prodouct(a,b)<<endl;

}