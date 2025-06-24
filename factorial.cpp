#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int fac=1;
    for (int i=1;i<=n;i++){
        fac*=i;
    }
    cout<<fac;
    system("pause");
    return 0;
}