# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int a=0,b=1;
    for (int i=0;i<n;i++){
        int next=a+b;
        cout<<a<<" ";
        a=b,b=next;
    }
    cout<<endl;
    //To check if a number is in fibonacci series
    int num;
    cout<<"Enter the number to be checked :";
    cin>>num;

    if (num == 0 || num == 1) {
        cout << "Yes, it's in the Fibonacci series.";
        return 0;
    }
    int next = a + b;

    while (next <= num) {
        if (next == num) {
            cout << "Yes, it's in the Fibonacci series.";
            return 0;
        }
        a = b;
        b = next;
        next = a + b;
    }

    cout << "No, it's not in the Fibonacci series.";
    return 0;

    system("pause");
    return 0;
}