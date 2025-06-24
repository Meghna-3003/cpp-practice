#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n";
    cin>>n;
    bool isPrime=true;
    for(int i =2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if (isPrime==false){
        cout<<"number is not prime";
    }else{
        cout<<"number is prime";
    }
    
    system("pause");
    return 0;
}