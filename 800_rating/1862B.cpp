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

        vector<int> arr;
        arr.push_back(nums[0]);
        
        for(int i=1; i<n; i++){
            if(nums[i-1] > nums[i]){
                if(nums[i]-1 == 0){
                    arr.push_back(nums[i]);
                }
                else
                arr.push_back(nums[i]-1);
            } 
            arr.push_back(nums[i]);
        }
        cout<<arr.size()<<endl;
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
}