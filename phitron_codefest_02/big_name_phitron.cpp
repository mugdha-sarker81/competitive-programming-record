//https://www.hackerrank.com/contests/phitron-code-fest-2-b9/challenges/big-name-phitron/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main()
{ 
        string ara,word;
        getline(cin,ara);
        stringstream ss(ara);
        int cnt=0;
        while(ss>>word){
            if(word=="PHITRON" || word=="Phitron" || word=="phitron"){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    return 0;
}
