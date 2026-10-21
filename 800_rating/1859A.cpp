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

        sort(nums.begin(), nums.end());
        vector<int> b;
        vector<int> c;

        int i=0;
        int cnt = 0;
        while(i<n-1){
            if(nums[i] == nums[i+1]){
                b.push_back(nums[i]);
                cnt++;
                
            }
            else{
                break;
            }
            i++;
        }
        
        b.push_back(nums[i]);
        i++;

        while(i<n){
            c.push_back(nums[i]); 
            i++;        
        }
        if(cnt == n-1){
            cout<<-1<<endl;
        }
        else{
            cout<<b.size()<<endl;
            cout<<c.size()<<endl;
            for(int k=0; k<b.size(); k++){
                cout<<b[k]<<" ";
            }
            cout<<endl;
            
            for(int k=0; k<c.size(); k++){
                cout<<c[k]<<" ";
            }
            cout<<endl;
        }


    }
        
        
}