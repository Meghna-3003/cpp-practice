# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n";
    cin>>n;
    /*
    *
    **
    ***
    *****
    */
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    /*1
    22
    333
    4444*/
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
            
        }
        cout<<endl;
    }
    /*
    A
    BB
    CCC
    DDDD
    EEEEE
    */
   char chr='A';
   for(int i=0;i<n;i++){
    for (int j=0;j<i+1;j++ ){
        cout<<chr;
    }
    chr++;
    cout<<endl;
   }
   /*
   1
   12
   123
   1234*/
   for(int i=0;i<n;i++){
    
    for (int j=1;j<=i+1;j++){
        cout<<j;
        
    }
    cout<<endl;
   }
    system("pause");
    return 0;
}