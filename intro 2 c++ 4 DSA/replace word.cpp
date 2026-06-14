//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-09/challenges/replace-word/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;
   while(t--)
   {
        string s,x; cin>>s>>x;
        while(s.find(x)!= string::npos){
            size_t pos = s.find(x);
            s.replace(pos,x.length(),"#");
        }
        cout<<s<<endl;
   } 
}
