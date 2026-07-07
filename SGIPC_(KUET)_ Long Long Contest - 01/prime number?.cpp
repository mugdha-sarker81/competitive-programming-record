#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>ara;
    ara.push_back(2); ara.push_back(3);
    bool ck;
    for(int i=5;i<1500000;i+=2){
        ck= true;
        for(int j=3;(long long)j*j<=i;j+=2){
            if(i%j==0){
                ck = false;break;
            }
        }
        if(ck){
            ara.push_back(i);
        }
    }
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<ara[n-1]<<endl;
    }
    return 0;
}
