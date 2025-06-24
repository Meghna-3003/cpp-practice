# include <iostream>
using namespace std;
// int sumofDig(int num){
//     int sumD=0;
//     while (num>0){
//         int lst=num%10;
//         int num=num/10;
//         sumD+=lst;
//     }
//     cout<<"sumD";
//     return sumD;
// }
// int main(){
//     cout<<sumofDig(1230)<<endl;
//     return 0
int sumofDigits(int num) {  
    int digSum= 0;
    while(num >0){
        int lastDig= num % 10;
        num = num/10;
        digSum +=lastDig;
}
    return digSum;
}
int main() {
    cout << "sum = " << sumofDigits(2356) << endl;
    system("pause");
    return 0;
}
// }
