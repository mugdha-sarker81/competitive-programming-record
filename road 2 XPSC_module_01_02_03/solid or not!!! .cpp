//https://www.hackerrank.com/contests/road-to-problem-solvers-club-a-xpsc-module-01-a-02-a-03/challenges/solid-or-not

#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

   int n; cin>>n;
   while(n--)
   {
        ll k; cin>>k;
        bool flag=true;
        if(k==2){
           cout<<"YES\n"; continue; 
        }else if(k==1 || k%2==0){
            cout<<"NO\n"; continue;
        }else{
            for(ll i=3;i*i<=k;i+=2){
                if(k%i== 0){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
   }
}
