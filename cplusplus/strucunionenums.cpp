#include<iostream>

using namespace std;

 struct test //This is used when we need many variables but we want them all to group as a part of single variable

 {
     /* data */
     int n;
     char sec;
     float dec;
     bool is_it;
     double so;
 
 };
 union test2 //This is a struct but you can only use one variable at a time
 {
     int a;
     char fav;
     bool is_not;
     double no;

 };
 

int main(){

struct test one;
one.n = 23;
one.is_it = 0;
one.dec = 23.33;
one.sec =  'a';
cout<<one.n<<endl;
cout<<one.is_it<<endl;
cout<<one.dec<<endl;
cout<<one.sec<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
union test2 two;
two.a =12;
two.is_not =1;//If we run this line two.a value would be couroupted and the value will not be shown correctly;
//Also in union the last defined variable in this case is_not will hold it's correct value and other will have a value which we call as garbage value
cout<<two.a<<endl;
cout<<two.is_not<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
enum programing_lang{python,java,cpp,cs,js,c};//This is nothing more than assingin 1 to n to a set of vairables to make the code more readable
cout<<python<<endl;
cout<<js<<endl;
cout<<cpp<<endl;
int a = python;
cout<<a<<endl;






}