#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x; cin>>n>>x;
    vector<int>ara(n);
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    sort(ara.begin(),ara.end());
    int i=0,j=n-1,ans=0;
    while(i<=j){
        if(i==j){
            if(ara[i]<=x){
                ans++; break;
            }
        }
        if(ara[i]+ara[j]<=x){
            ans++; i++; j--;
        }else if(ara[j]<=x){
            ans++; j--;
        }else{
            j--;
        }
    }
    cout<<ans;
    return 0;
}
