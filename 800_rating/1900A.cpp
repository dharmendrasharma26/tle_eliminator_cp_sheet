#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        if(s.find("...") != string :: npos){
            ans = 2;
        }
        else{
            int cnt = 0;
            for(int i=0; i<n; i++){
                if(s[i] == '.'){
                    cnt++;
                }
            }
            ans = cnt;
        }
        cout<<ans<<endl;
    }
}