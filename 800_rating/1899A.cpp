#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        if((num+1)%3 == 0 || (num-1)%3 == 0){
            cout<<"First";
        }
        else{
            cout<<"Second";
        }
        cout<<endl;
    }
}