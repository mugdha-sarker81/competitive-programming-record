//https://www.hackerrank.com/contests/phitron-code-fest-2-b9/challenges/divisible-by-11-1-1-4/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;cin>>num;
    long long even=0,odd=0;
    for(int i=0;i<num.size();i++){
        if((num.size()-1-i)%2==0){
            odd+= num[i]-'0';
        }else{
            even+= num[i]-'0';
        }
    }
    
    bool flag=false;
    int dif=abs(odd-even);
    if(dif%11==0){
        flag=true;
    }
    if(flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
