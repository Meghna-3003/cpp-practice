#include <iostream>
using namespace std;
int main() {
int n;
cout<<"enter your number: ";
cin>>n;
int rev=0;
while (n!=0){
    int lst=n%10;
    rev=rev*10+lst;
    n=n/10;
}
cout<<"reversed number: "<<rev;
    system("pause");
    return 0; 
}
