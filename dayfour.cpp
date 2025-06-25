# include <iostream>
using namespace std;
/*
*
**
***
****
*/
int main(){
    int n=4;
    for (int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    /*
    ****
    ***
    **
    *
    */
   for (int i=0;i<n;i++){
    for (int j=n;j>i;j--){
        cout<<"*";
    }cout<<endl;
   }
   /*
    1
    12
    123
    1234*/
   for(int i=0;i<n;i++){
    for (int j=1;j<=i+1;j++){
        cout<<j;
    }cout<<endl;
   }
   /*1
    2 3
    4 5 6
    7 8 9 10*/
    int num=1;
   for (int i=0;i<n;i++){
    for (int j=0;j<=i;j++){
        cout<<num<<" ";
        num++;
    }cout<<endl;
   }
    system("pause");
    return 0;
}