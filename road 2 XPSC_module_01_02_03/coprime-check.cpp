//https://www.hackerrank.com/contests/road-to-problem-solvers-club-a-xpsc-module-01-a-02-a-03/challenges/coprime-check

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(b){
        int tem= b;
        b= a%b;
        a= tem;
    }
    return a;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        if(gcd(a,b)==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
