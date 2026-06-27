/* 
  link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-09/challenges/insert-the-vector/problem?isFullScreen=true
  question :
  i got two int array a[n],b[m] and an index (0<= idx <n)
  i have to inert full array b[m] on that given index in array a[n]
  observation: 
  use insert() STL m times like   
  for(auto val: b){
        ara.insert(ara.begin()+idx,val);    idx++;
    } 
  time complexity: O(n*m)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n,m,idx; cin>>n;
    vector<int> ara(n);
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    cin>>m; 
    vector<int> ar(m);
    for(int i=0;i<m;i++){
        cin>>ar[i];
    }
    cin>>idx;
    for(auto a: ar){
        ara.insert(ara.begin()+idx,a);
       idx++;
    } 
    for(int i=0;i<ara.size();i++){
        cout<<ara[i]<<" ";
    }
    return 0;
}
