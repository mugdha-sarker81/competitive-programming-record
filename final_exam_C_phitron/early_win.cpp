//https://www.codechef.com/problems/EARLYWIN

#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        string a,b,ans; cin>>a>>b;
        if(m<n){n=m;}

        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                ans+=a[i];
            }else{
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
