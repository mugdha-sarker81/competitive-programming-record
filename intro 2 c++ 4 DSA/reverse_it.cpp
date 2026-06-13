//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-09/challenges/reverse-it-8-2/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<string> nm(n);
    vector<int> cls(n);
    vector<char> sec(n);
    vector<int> id(n);
    for(int i=0;i<n;i++){
        cin>>nm[i]>>cls[i]>>sec[i]>>id[i];
    }
    reverse(sec.begin(),sec.end());
    for(int i=0;i<n;i++){
        cout<<nm[i]<<" "<<cls[i]<<" "<<sec[i]<<" "<<id[i]<<endl;
    }
}
