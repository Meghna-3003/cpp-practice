#include <iostream>
using namespace std;

bool ispoweroftwo(int num){
    if(num<=0){
        return false;
    }
    
    while(num%2==0){
            num=num/2;
            return 1;
        }
    return num==1;
    
}
int main() {
int n;
cout<<"enter your number: ";
cin>>n;
if (ispoweroftwo(n)) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }

    system("pause");
    return 0; 
}
