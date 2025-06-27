# include <iostream>
# include <vector>
using namespace std;

int main(){
    //creating vectors :
    vector<int>vec={1,2,3,4};//method 1
    //vector <int>(4,5)
    //for each loops
    for (int val:vec){
        cout<<val<<" ";
    }
    return 0;
}