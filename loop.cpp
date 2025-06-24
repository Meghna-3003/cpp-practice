#include <iostream>
using namespace std;
int main() {
    int n=1;
    int i;
    cout<<"enter the value of n";
    cin>> i;
    while(n<=i){
        cout<< n<<endl;
        n++;
    }
    for( int n=1;n<=i;n++){
        cout<<n<<endl;
    }
     

    system("pause");
    return 0; 
}