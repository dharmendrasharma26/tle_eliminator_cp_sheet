#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        if(nums[i] < 0){
            nums[i] = nums[i]*(-1);
        }
        if(nums[i] < mini){
            mini = min(mini, nums[i]);
        }
    }

    cout<<mini<<endl;

    
        

}