# include <iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int start=0,end=size-1;
    while (start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={34,54,65,12,98,21,69};
    int size=7;
    reverseArray(arr,size);
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
    system("pause");
    return 0;
}
