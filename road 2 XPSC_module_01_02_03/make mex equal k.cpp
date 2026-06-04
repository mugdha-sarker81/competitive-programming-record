//https://www.hackerrank.com/contests/road-to-problem-solvers-club-a-xpsc-module-01-a-02-a-03/challenges/make-mex-equal-to-k

#include<bits/stdc++.h>
using namespace std;

int mex(int n,const vector<int> &ara,int ans,int tar,int cnt){
    bool flag=false;
    for(int i=0;i<n;i++){
        if(ans==ara[i]){
            ans++; i=-1;
        }else{
            flag=true;
        }
    }
    if(flag){
        if(ans<tar){
            cnt++; ans++;
            return mex(n,ara,ans,tar,cnt);
        }else if(ans==tar){
            return cnt;
        }else{
            return -1;
        }
    }
    return -1;
}

int main()
{
   int n,tar; cin>>n;
   vector<int>ara(n);
   for(int i=0;i<n;i++){
    cin>>ara[i];
   } 
   cin>>tar;

   int ans=0,cnt=0;
   cout<<mex(n,ara,ans,tar,cnt);
}
