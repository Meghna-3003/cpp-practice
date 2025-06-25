#include <iostream>
using namespace std;
int main() {
//learning bitwise operators
int a,b;
cout<<"enter your first number :";
cin>>a;
cout<<"enter your second number :";
cin>>b;
cout<<"and"<<(a&b)<<endl;
cout<< "XOR"<<(a^b)<<endl;
cout<<"or"<<(a|b)<<endl;
    system("pause");
    return 0; 
}