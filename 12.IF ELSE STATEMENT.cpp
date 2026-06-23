// we use if else statements when we have situations given and the answer or output is situation dependent
// condition for even: n/2=0 ( when any num is divided by 2 and the reminder is 0 then it is even num)
//condition for odd:n/2 isn't equals to 0
// a==b is used to check the equality, while a=b is assignment operator
//a!=b means a isn't equall to b

// question: take a positive integer output and tell if it is even or odd?
#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
if (x%2==0){
    cout<<"Even number";
}
else {
    cout<<"ODD number";
}
return 0;
}
