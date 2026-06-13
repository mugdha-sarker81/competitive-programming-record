//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-09/challenges/find-jessica/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s,word;
   getline(cin,s);
   stringstream ss(s);
   while(ss>>word){
    if(word=="Jessica"){
        cout<<"YES\n";
        return 0;
    }
   }
   cout<<"NO\n";
}
