//https://www.hackerrank.com/contests/road-to-problem-solvers-club-a-xpsc-module-01-a-02-a-03/challenges/swapping-challenge-1

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
   vector<pair<int,int>> ara(n);
   for(int i=0;i<n;i++){
    cin>>ara[i].first; ara[i].second=i+1;
   } 

   sort(ara.begin(),ara.end());
   int idx = (n+1)/2;
   int ans = abs(ara[idx-1].second - idx);
   cout<<ans;
}
