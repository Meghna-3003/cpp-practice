#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"enter no. of lines:";
    cin>>n;
    /*1234
    1234
    1234
    1234*/
    for (int i =1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
    /*
    ABCD
    ABCD
    ABCD
    ABCD*/

    for (int i =1;i<=n;i++){
        char ch='A';

        for(int j=0;j<n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    /*
    123
    456
    789
    */
    int st=1;
     for(int i=1;i<=n;i++){
        
        for (int j=1;j<=n;j++){
            cout<<st;
            st++;
        }cout<<endl;
    }
    /*
    ABC
    DEF
    GHI
    */
   char chr='A';
   for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<chr;
        chr++;
    }cout<<endl;
    

   }

    system("pause");
    return 0;
}