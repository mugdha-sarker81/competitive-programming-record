//https://www.hackerrank.com/contests/road-to-problem-solvers-club-a-xpsc-module-01-a-02-a-03/challenges/rahims-shopping/problem

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   vector<int>ara(n);
   for(int i=0;i<n;i++){
    cin>>ara[i];
   } 
   int ans= -1;
   sort(ara.begin(),ara.end());
   for(int i=0;i<n;i++){
        if(ara[i]<=k){
           ans=ara[i];
        }
   }
   cout<<ans;
}
