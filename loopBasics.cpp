# include <iostream>
using namespace std;
int main(){
    // //print 1to n
    int n;
    cout<<"enter no. :";
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    //print 1 to n while loop 
    int i=1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
    //print sum using for loop
    int N;
    cout<<"enter no. :";
    cin>>N;
    int sum=0;
    for (int i=1;i<=N;i++){
        sum+=i;
    }
    cout<<sum;
    // print sum using while loop 
    while (i<=N){
        sum+=i;
        i++;
    }
    cout<<sum;
    //factorial of a num
    int fac=1;
    for (int i=1;i<=N;i++){
        fac*=i;
    }
    cout<<fac;
    //factorial using while loop
    while(i<=N){
        fac*=i;
        i++;
    }
    // cout<<fac;
    //check no. is prime
    bool isPrime=true;
    int a;
    cout<<"Enter your number";
    cin>>a;
    for(int i=2;i<a;i++){
        if (a%i==0){
            isPrime=false;
            break;
        }
    }
    if (isPrime){
        cout<<a<<" is prime.";
    }else{
        cout<<a<<" is not prime";
    }
    //table of number n
    for (int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    //count digits in a number
    int count=0;
    if (n==0){
        count=1;
    }
    while(n>0){
        n/=10;
        count++;
    }
    cout<<count;
    //reverse a number
    int rev=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    cout<<rev;
    //sum of digits of a number
    int sumDig=0;
    while(n>0){
        int rem=n%10;
        sumDig+=rem;
        n/=10;
    }
    cout<<sumDig;
    //check if a number is palindrome
    int original=n;
    while(n>0){
        int rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    if (rev==original){
        cout<<"number is palindrome";
    }else{
        cout<<"number is not palindrome";
    }
    //check if number is armstrong
    int sumCube=0;
    while(n>0){
        int digit=n%10;
        sumCube+=(digit*digit*digit);
        n=n/10;
    }
    if (sumCube==original){
        cout<<"number is armstrong .";
    }else{
        cout<<"number is not armstrong .";
    }
    //product of digits
    int prodDig=1;
    while(n>0){
        int digit=n%10;
        prodDig*=digit;
        n=n/10;
    }
    cout<<prodDig<<endl;
    //to find largest digit of a number
    int maxDigit=0;
    while(n>0){
        int rem=n%10;
        if (rem>maxDigit){
            maxDigit=rem;
        }
        n=n/10;
    }
    cout<<"largest digit of number :"<<maxDigit<<endl;

    system("pause");
    return 0;
}