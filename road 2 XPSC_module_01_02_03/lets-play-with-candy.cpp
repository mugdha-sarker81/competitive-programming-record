//https://www.hackerrank.com/contests/road-to-problem-solvers-club-a-xpsc-module-01-a-02-a-03/challenges/lets-play-with-candy

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
   vector<int>ara(n);
   for(int i=0;i<n;i++){
    cin>>ara[i];
   } 
   int ans=0,cnt;
   while(1){
    for(int i=0;i<n;i++){
        if(ans==ara[i]){
            ans++;
            cnt=0;
            break;
        }else{
            cnt=1;
        }
    }
    if(cnt==1){
        break;
    }
   }
   cout<<ans;
}
