# include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
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
        for (int j=2;j<i+2;j++) {
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
    //number pyramid
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    //inverted number pyramid
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<<n-i<<" ";
        }
        cout<<endl;
    }
    //palindrome pyramid
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    //optimised approach
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Increasing numbers
        for (int j = 1; j <= i + 1; j++) {
            cout << j;
        }

        // Decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }
    //pascal's triangle

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print values using nCr
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }

        cout << endl;
    }
    //hollow diamond
    //top
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        if (i!=0){
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
        }
    //bottom
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-1){
            for(int j=0;j<2*(n-i)-3;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;

    }

    
    system("pause");
    return 0;
}
