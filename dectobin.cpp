# include <iostream>
using namespace std;
int decimaltobinary(int numdec){
    int bin=0;
    int pow=1;   
    while( numdec>0){
        int rem=numdec%2;
        numdec=numdec/2;
        bin+=(rem*pow);
        pow*=10;
    }
    return bin;

}
int main(){
    int n;
    
    cout<<"enter your number :";
    cin>>n;
    
    cout<<decimaltobinary(n)<<endl;
    system("pause");
    return 0;
}