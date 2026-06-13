//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-09/challenges/sort-it-6-2/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<string> nm(n);
    vector<int> cls(n);
    vector<char> sec(n);
    vector<int> id(n);
    vector<int>math(n),eng(n);
    vector<pair<int,pair<int,int>>>ans(n);
    for(int i=0;i<n;i++){
        cin>>nm[i]>>cls[i]>>sec[i]>>id[i]>>math[i]>>eng[i];
        ans[i].first=math[i]+eng[i];
        ans[i].second.first=id[i];
        ans[i].second.second=i;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ans[i].first<ans[j].first){
                swap(ans[i],ans[j]);
            }else if(ans[i].first==ans[j].first){
                if(ans[i].second.first>ans[j].second.first){
                    swap(ans[i],ans[j]);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        int idx= ans[i].second.second;
        cout<<nm[idx]<<" "<<cls[idx]<<" "<<sec[idx]<<" "<<id[idx]<<" "<<math[idx]<<" "<<eng[idx]<<endl;
    }
}
