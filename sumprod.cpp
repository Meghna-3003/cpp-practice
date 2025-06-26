# include <iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int prod(int arr[],int size){
    int prod=1;
    for(int i=0;i<size;i++){
        prod*=arr[i];
    }
     return prod;
}
int main(){
    int array[]={1,2,3,4,5};
    cout<<"sum ="<<sum(array,5)<<endl;
    cout<<"prod ="<<prod(array,5)<<endl;
    system("pause");
    return 0;
}