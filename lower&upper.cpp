# include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter your character:"
    cin>>ch;
    if (ch>='A' && ch<='Z'){
        cout<<"character is in uppercase";
    }else if (ch >='a' && ch <='z'){
        cout<<"character is in lowercase";
    }else{
        cout<<"invalid character";
    }
}