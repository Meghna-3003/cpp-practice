# include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter your character:";
    cin>>ch;
    // without using ASCII CODE:
    if (ch>='A' && ch<='Z'){
        cout<<"character is in uppercase"<<endl;
    }else if (ch >='a' && ch <='z'){
        cout<<"character is in lowercase"<<endl;
    }else{
        cout<<"invalid character"<<endl;
    }
    /*using ASCII code:(implicit conversion)
    ch is character and converted in int comparison with ASCII code*/ 
    if (ch>=65 && ch<=90){
        cout<<"character is in uppercase"<<endl;
    }else if (ch >=97 && ch <=122){
        cout<<"character is in lowercase"<<endl;
    }else{
        cout<<"invalid character"<<endl;
    }

    system("pause");
    return 0;
}