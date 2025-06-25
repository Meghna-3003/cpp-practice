#include <iostream>
using namespace std;

bool ispoweroftwo(int num){
    if(num<=0){
        return false;
    }
    
    while(num%2==0){
            num=num/2;
            return 1;
        }
    return num==1;
    
}
// using bitwie logic ->A number is a power of 2 if it has only one 1 in its binary form.
    #include <iostream>
    using namespace std;

    bool isPowerOfTwo(int num) {
    if (num <= 0)
        return false;

    return (num & (num - 1)) == 0;
}

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    if (isPowerOfTwo(n)) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }


    system("pause");
    return 0; 
}
