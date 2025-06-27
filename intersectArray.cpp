# include <iostream>
using namespace std;
bool foundAny=false;
void intersectArray(int arr1[],int arr2[],int sz1,int sz2){
    for (int i=0;i<sz1;i++){
        bool found=false;
        for (int j=0;j<sz2;j++){
            if (arr1[i]==arr2[j]){
                found=true;
                break;
            }
        }
    
    if (found){
        cout<< arr1[i]<<" ";
        foundAny=true;
    }
}
    if (!foundAny){
    cout<<"No element intersection";
    }

}
int main(){
    int arr1[]={21,34,56,76,32,89,65};
    int arr2[]={54,65,90,21,56,39};
    intersectArray(arr1,arr2,7,6);
    system("pause");
    return 0;
}