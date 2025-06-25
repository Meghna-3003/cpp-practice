# include <iostream>
using namespace std;
int binarytodecimal(int numbin){
    int dec=0;
    int pow=1;   
    while( numbin>0){
        int rem=numbin%10;
        dec+=(rem*pow);
        numbin=numbin/10;
        pow*=2;
    }
    return dec;

}
int main(){
    int n;
    
    cout<<"enter your number :";
    cin>>n;
    
    cout<<binarytodecimal(n)<<endl;
    system("pause");
    return 0;
}