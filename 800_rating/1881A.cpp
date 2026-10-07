#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m;
        cin>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        int cnt = 0;
        int flag = -1;
        for(int i = x.length(); i <= n+m; i = x.length()){
            if(x.find(s) != string :: npos){
                flag = 0;
                break;
            }
            
            x += x;
            cnt++;
            
        }
        if(flag == -1 && x.find(s) != string::npos){
        flag = 0;
        }
    
        if(flag == 0){
            cout<<cnt<<endl;
        }
        else{
            cout<<flag<<endl;
        }
    }
}