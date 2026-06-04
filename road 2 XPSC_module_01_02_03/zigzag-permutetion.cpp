//https://www.hackerrank.com/contests/road-to-problem-solvers-club-a-xpsc-module-01-a-02-a-03/challenges/zigzag-permutation

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int>ara(n);
   int i=1,j=n,idx=0;
   while(idx<n)
   {
    if(idx%2 == 0){
        ara[idx]=i;
        idx++; i++;
    }else{
        ara[idx]=j;
        idx++; j--;
    }
   }
   for(auto a: ara){
    cout<<a<<" ";
   }
   
}
