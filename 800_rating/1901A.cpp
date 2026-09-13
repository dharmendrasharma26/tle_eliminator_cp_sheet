#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int maxi = INT_MIN;
        int n;
        cin>>n;
        int x;
        cin>>x;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int st = arr[0]-0;
        int end = x-arr[n-1];
        int final = 2*end;
        for(int i=0; i<n-1; i++){
            int d = arr[i+1]-arr[i];
            maxi = max(maxi, d);
        }
        cout<<max({st,maxi,final})<<endl;
    }
}
