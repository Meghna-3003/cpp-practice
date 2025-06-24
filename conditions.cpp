# include <iostream>
using namespace std;
int main(){
// check eligibility for driving:
    int age;
    cout<<"enter your age: ";
    cin>> age;
    if (age<=18){
        cout<<"you are not eligible for driving"<<endl;
    }else{
        cout<<"you are eligible for driving"<<endl;
    }
//check odd or even: 
    int a;
    cout<<"enter your number:";
    cin>>a;
    if ((int)a%2==0){
        cout<<"your number is even\n";
    }else{
        cout<<"your number is odd\n";
    }
    system("pause");
    return 0;
}