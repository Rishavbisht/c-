#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,first,last,digit,middle,result;         
    cout<<"enter the no you want to swap"<<endl;
    cin>>num;
    digit=(int)log10(num);
    last=num%10;
    first=num/pow(10,digit);
    int x = pow(10,digit);
    middle=num%x;
    middle=middle/10;
    result=last*pow(10,digit)+middle*10+first*1;
    cout<<"no after swaping "<<result<<endl;



    return 0;

}
