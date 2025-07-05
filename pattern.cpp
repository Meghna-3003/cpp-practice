# include <iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        //butterfly pattern
        //top
        
        for(int i=0;i<n;i++){
            //stars
            for(int j=0;j<i+1;j++){
                cout<<"*";
            }
            //spaces
            for(int j=2*(n-i-1);j>0;j--){
                cout<<" ";
            }
            //stars
            for(int j=0;j<i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        //bottom
        for(int i=0;i<n;i++){
            //stars
            for(int j=n;j>i;j--){
                cout<<"*";
            }
            //spaces
            for(int j=0;j<2*i;j++){
                cout<<" ";
            }
            //stars
            for(int j=n;j>i;j--){
                cout<<"*";
            }
           
            cout<<endl;
        }
        //hourglass patterm
        // Top half
        for (int i = 0; i < n; i++) {
            // Spaces
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            // Stars
            for (int j = 0; j < 2 * (n - i) - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
        // Bottom half (starts from n-2 for symmetry)
        for (int i = n - 2; i >= 0; i--) {
            // Spaces
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            // Stars
            for (int j = 0; j < 2 * (n - i) - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
        system("pause");
        return 0;
    }