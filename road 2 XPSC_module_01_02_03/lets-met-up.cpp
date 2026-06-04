//https://www.hackerrank.com/contests/road-to-problem-solvers-club-a-xpsc-module-01-a-02-a-03/challenges/lets-meet-up/problem

#include<bits/stdc++.h>
using namespace std;
using ll= long long;

ll gcd(ll a,ll b)
{
    while(b){
        ll tem= b;
        b= a%b;
        a= tem;
    }
    return a;
}

ll lcm(ll a,ll b){
    return (a/ gcd(a , b))*b;
}

int main()
{
   ll a,b; cin>>a>>b;
   cout<<lcm(a,b); 
}
