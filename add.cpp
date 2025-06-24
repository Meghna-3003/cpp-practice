# include <iostream>
using namespace std;
int main(){
     int i=1;
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int sum=0;
    // using while loop
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    // using for loop
    for(int i =1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    // sum of odd no. #logic 1
     int sumOdd=0;
    for(int i=1;i<=n;i+=2){
        sumOdd+=i;
    }
    cout<<"sum of  odd ="<<sumOdd<<endl;
    //sum of odd no. # logic 2
    for(int i=1;i<=n;i++){
        if (i%2!=0){
            sumOdd+=i;
        }  
    }
    cout<<"sum of  odd ="<<sumOdd<<endl; 
    //sum of no. div by 3
    int sum=0;
    for(int i=1;i<=n;i++){
        if (i%3==0){
            sum+=i;
        }
        
    }cout<<sum;

    system("pause");
    return 0;
}
