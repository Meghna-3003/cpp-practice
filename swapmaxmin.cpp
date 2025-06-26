# include <iostream>
#include <climits>
using namespace std;
void maxSWAPmin(int arr[],int size){
    int small=INT_MAX;
    int smallindex=-1,largeindex=-1;
    for (int i=0;i<size;i++){
        if (arr[i]<small){
        small=min(arr[i],small);
        smallindex=i;
    }
    }
    int large=INT_MIN;
    for (int i=0;i<size;i++){
        if (arr[i]>large){
        large=max(arr[i],large);
        largeindex=i;
    
        }
    }
    if( smallindex!=-1 && largeindex!=-1){
    swap(arr[smallindex],arr[largeindex]);
}
}
int main(){
    int array[]={3,4,3,2,5,5,6,7,90};
    int size=9;
    maxSWAPmin(array,9);
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    system("pause");
    return 0;
}