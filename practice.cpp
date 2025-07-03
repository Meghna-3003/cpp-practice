# include <iostream>
using namespace std;
int main(){
    const float pi=3.14;
    float r;
    cout<<"Enter radius of circle :";
    cin>>r;
    float area=2*pi*r;
    cout<<"The area of circle is :"<< area<<endl;
    int a;
    int b;
    cout<<"enter a & b :";
    cin>>a>>b;
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"value of a :"<<a<<endl<<"value of b :"<<b<<endl;
    int num1;
    int num2;
    char op;
    cout<<"enter num1 :";
    cin>>num1;
    cout<<"enter num2 :";
    cin>>num2;
    cout<<"enter operation to be done :";
    cin>>op;
    if (op=='+'){
        cout<<num1+num2;
    }else if(op=='-'){
        cout<<num1-num2;
    }else if(op=='*'){
        cout<<num1*num2;
    }else if(op=='/'){
        cout<<num1/num2;
    }else{
        cout<<"not applicable";
    }
    
    
    system ("pause");
    return 0;
}