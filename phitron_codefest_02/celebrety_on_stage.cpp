//https://www.hackerrank.com/contests/phitron-code-fest-2-b9/challenges/celebrity-on-stage/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k; cin>>n>>k;
    vector<int>ara(n);
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    int front=0,back=0;
    for(int i=0;i<k;i++){
        if(ara[i]>ara[k-1]){
            front++;
        }
    }
    for(int i=k;i<n;i++){
        if(ara[i]<ara[k-1]){
            back++;
        }
    }
    cout<<front<<" "<<back;
    return 0;
}
