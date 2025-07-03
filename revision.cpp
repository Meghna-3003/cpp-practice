# include <iostream>
using namespace std;
//optimised logic to check prime :
    bool checkPrime(int num){
        if (num>2)
        return false;
    
    for(int i=2;i*i<=num;i++){
        if (num%i==0)return false;
    }
    return true;}

int main(){
    if(checkPrime(7)){
        cout<<"yes, it is prime";
    }else{
        cout<<"no, not a prime";
    }
    //fibonacci series
    int n;
    cin>>n;
    int a=0,b=1;
    
    for(int i=0;i<n;i++){
        int next=a+b;
        cout<<a<<" ";
        a=b;b=next;
    }
    cout<<endl;
    //count the digits of a number :
    int count=0;
    if(n==0){
        count=1;
    }
    while(n>0){
        n/=10;
        count++;
    }
    cout<<"Digits in the number :"<<count<<endl;
    //hollow rectangle
    int rows=4;
    int cols=5;
    // cin>>rows;
    // cin>>cols;
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=cols;j++){
            if(i==0||j==0||i==rows||j==cols){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    //check a no. is prime
    bool isPrime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    if(isPrime){
        cout<<"yes, it is prime";
    }else{
        cout<<"no, not a prime";
    }
    cout<<endl;
    

    system("pause");
    return 0;
}