//character data type is a data type that stores a single character such as a letter, digit or symbol. 
char is written inside the single inverted comas

#include<iostream>
using namespace std;
int main(){
char x;
x = '1';
cout<<x;
return 0;
}
//ASCII value= 
#include<iostream>
using namespace std;
int main(){
  char ch;
cin>> ch;
cout<< (int) ch; // ch to int ASCII VALUE
return 0;
}
// int to char 
#include<iostream>
using namespace std;
int main(){
int x;
cin>> x;
cout<<(char) x;
  // also we can write in this format 
  //cin>> x;
  // char ch = (char) x;
  // cout<< ch;
return 0;
}



