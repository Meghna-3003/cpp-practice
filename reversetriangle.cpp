#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    /*1
    21
    321
    4321
    54321*/
    for (int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    /*1
    23
    456
    78910*/
    int num=1; 
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }/*
    
        A
        BA
        CBA
        DCBA
        EDCBA*/
    for (int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            cout<<char('A'+j);
            
        }
        cout<<endl;
    }
        /*A
        AB
        ABC
        ABCD
        ABCDE*/
    for (int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char('A'+j);
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}
