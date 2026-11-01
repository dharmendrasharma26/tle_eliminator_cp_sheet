#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }

        bool flag = true;
        int mini_diff = INT_MAX;
        for(int i=0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                flag = false;
                break;
            }
            int diff = nums[i+1]-nums[i];
            mini_diff = min(mini_diff, diff);
        }
        if(flag == false){
            cout<<0<<endl;
        }
        else{
            int oper = mini_diff/2+1;
            cout<<oper<<endl;
        }
    }
}