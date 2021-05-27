#include<iostream>

using namespace std;

//int sum(int a, int b);//This method is called Function prototyping by this way we can make this function after the main func
int sum (int,int);// This way also we can define the function
void subscriber();

int main(){
cout<<sum(2,2)<<endl;
subscriber();

}

int sum(int a, int b){
    int c = a+b;
    return c;
}
void subscriber(){
    cout<<"Subscribe to BakrTech "<<endl; 
}