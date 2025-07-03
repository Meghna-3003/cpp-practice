# include <iostream>
# include <climits>
using namespace std;
int main(){
    int arr[]={1,-4,5,7,-2,-8,9,10};
    int sz=8;
    // for(int st=0;st<sz;st++){
    //     for(int end=st;end<sz;end++){
    //         for(int i=st;i<=end;i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    //brute force approach :

    // int maxSum=INT_MIN;
    // for(int st=0;st<sz;st++){
    //     int currSum=0;
    //     for(int end=st;end<sz;end++){
    //             currSum+=arr[end];
    //             maxSum=max(currSum,maxSum);
    //         }
    //     }
    //    cout<<"the maximum sum is :"<<maxSum;
    
    // kadane's algorithm
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<sz;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if (currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum;
    system("pause");
    return 0;
} 