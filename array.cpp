# include <iostream>
#include <climits>

using namespace std;

int main(){
    int size;
    cout<<"enter size  of array :";
    cin>>size;
    int marks[size]={};
    //size of an array
    int sz=sizeof(marks)/sizeof(int);
    cout <<sz<<endl;
    double price[]={104.5,78,13.00};//size 3 
    //accessing an array
    cout<<price[1]<<endl;
    //overwring a value or assingning a value
    price[1]=200;
    //entering values in loops
    for(int i=0;i<sz;i++){
        cout<<"enter the value "<<i+1<<" :";
        cin>>marks[i];
    }
    //loops on array
    for(int i=0;i<sz;i++){
        cout<<marks[i]<<endl;
    }
    //find smallest in array
    int smallest=INT_MAX;
    for(int i=0;i<sz;i++){
        if ( marks[i]<smallest){
        smallest=marks[i];//smallest=min(marks[i],smallest)
    }
}
    cout<<"smallest :"<<smallest<<endl;
    //find the largest in array
    int largest=INT_MIN;
    for(int i=0;i<sz;i++){
        if(marks[i]>largest){
            largest=max(marks[i],largest);
    }
    }
    cout<<"largest :"<<largest<<endl;
    system("pause");
    return 0;
}
