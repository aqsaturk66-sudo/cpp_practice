//code 1
//multiplication of 2 integers 
#include<iostream>
using namespace std;
int main(){
int x; // declaration
x=5; // initialization
int y;
y=4;
cout<<x*y; // multiplication of 2 variables 
return 0;
}
//code 2
//we can also declare and initialize both in single line
int x=5;
int y=4;
cout<<x*y;
//we can also write both varibles and there initialization and declaration together
int x=5, y=9;
cout<<x*y;
//code 3
//updation or overwriting of varibles
#include<iostream>
using namespace std;
int main(){
int x=4;
cout<<x<<endl;
x=5;
cout<<x<<endl;
return 0;
}
//code 4
#include <iostream>
using namespace std;
int main(){
int x=5;
cout<<x<<endl;
x=7;
cout<<x<<endl;
x= x+6; // also can be written as x += 6
cout<<x<<endl;
return 0;
}
//code 5
#include<iostream>
using namespace std;
int main(){
int a=10;
int b=5;
int Answer=a/b; // this program can also be executed without using Answer we can directly use cout<<a/b; and the program will run correctly
cout<<Answer<<endl;
return 0;
}
//code 6
#include<iostream>
using namespace std;
int main(){
int a=8;
int b=3;
cout<< a/b; //answer will be integer number
return 0;
}
//code 7
// increment and decrement operator
//post increment
#include<iostream>
using namespace std;
int main(){
int x= 4;
cout<<x<<endl;
x =x+1; // x+=1, x++ , through this we get increment of 1 number
cout<<x<<endl;
return 0;
}
// post decrement operator
#include<iostream>
using namespace std;
int main(){
int x=7;
cout<<x<<endl;
x--;
cout<<x<<endl;
return 0;
}
// we can also print post decremented variable without printing initial number, this will print 6 only 
#include<iostream>
using namespace std;
int main(){
int x=7;
x--;
cout<<x<<endl;
return 0;
}
// pre increment
#include<iostream>
using namespace std;
int main(){
int x=7;
cout<<x<<endl;
++x;
cout<<x<<endl;
return 0;
}
// Increment (++) increases a variable's value by 1, while decrement (--) decreases a variable's value by 1.
//Post-Increment (x++)
First use the current value, then increase it by 1.
int x = 5;
cout << x++;   // Output: 5
After this statement, x becomes 6.
Pre-Increment (++x)
First increase the value by 1, then use it.
int x = 5;
cout << ++x;   // Output: 6
x becomes 6 before it is displayed. same is for post decrement and pre decrement 

// code 8 (calculate the area of circle using variables)
// Area of circle= π*r^2
#include<iostream>
using namespace std;
int main(){
float r=2.5;
float area = 3.145*r*r;
cout<<"Area of circle" <<endl << area <<endl;
return 0;
}
// this program can be also written as
#include<iostream>
using namespace std;
int main(){
float r=2.5;
cout<<3.145*r*r;
return 0;
}
