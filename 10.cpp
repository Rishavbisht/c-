//Write a program in C++ to compute the total and average of four numbers

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,result;
   cout<<"enter the first no"<<endl;
   cin>>a;
   cout<<"enter the second no"<<endl;
   cin>>b;
   cout<<"enter the third no"<<endl;
   cin>>c;
   cout<<"enter the fourth no"<<endl;
   cin>>d;
   result=a+b+c+d/4;
   cout<<"average of four no"<<result<<endl;

    return 0;

}