#include <iostream>
using namespace std;
int main() {
//sum of two numbers:
    int a,b;
    cout<< "enter first number:";
    cin>> a;
    cout<< "enter second number:";
    cin>> b;
    cout<< "sum of two numbers:" << (a+b)<<endl;
//unary operators:
    int x=1;
    int y=++x;
    cout<< "x="<< x <<"\n"<< "y="<< y<< endl;
    system("pause");
    return 0;
}