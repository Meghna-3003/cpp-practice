# include <iostream>
using namespace std;
int main(){
    //top
    int n=4;
    //star
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
    
    //space
        for (int j=0;j<2*(n-i-1);j++){
        cout<<" ";
        }
        
    //star 
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;   
    }
    //bottom
    //star
    for (int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
    //space
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
    //star
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
    
}