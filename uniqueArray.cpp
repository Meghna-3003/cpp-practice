# include <iostream>
using namespace std;
bool found = false;

void uniqueArray(int arr[],int size){
    for (int i=0;i<size;i++){
        bool isUnique = true;
        for(int j=0;j<size;j++){
            if (i!=j && arr[i]==arr[j]){
                isUnique =false;
                break;
            }
        }
    if (isUnique){
        cout<<arr[i]<<" "; 
        found= true;               
    }
    }if(!found){
        found= false;
    }
    
    }

int main(){
    int marks[]={25,45,25,35,35,67,45,25,35,89,13};
    int size=11;
    cout<<"UNIQUE ELEMENTS :";
    uniqueArray(marks,size) ;
    
    system("pause");
    return 0;
}