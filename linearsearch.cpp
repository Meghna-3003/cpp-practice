# include <iostream>
using namespace std;
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if (arr[i]==target){
        return i;
    }
 
}   return -1;
}
int main(){
    int arr[]={23,54,13,78,59};
    cout<<linearsearch(arr,5,59);
    system("pause");
    return 0;
}
