# include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    //spaces
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
    //stars
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    //pyramid
    cout<<"pyramid"<<endl;
    for (int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    for (int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"palindrome pyramid"<<endl;
    for (int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        for (int j=2;j < i+2;j++) {
            cout << j << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"Diamond"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for (int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for (int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"inverted pyramid :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<2*i+1;j++){
            if(j==0||j==2*i||i==n-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }cout<<endl;
    }
    cout<<endl;
    system("pause");
    return 0;
}