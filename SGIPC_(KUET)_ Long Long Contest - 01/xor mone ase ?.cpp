#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r; cin>>l>>r;
    int ans,max=0;
    for(int i=l;i<=r;i++){
        for(int j=i;j<=r;j++){
            ans = i^j;
            if(ans>max){
                max=ans;
            }
        }
    }
    cout<<max;
    return 0;
}
