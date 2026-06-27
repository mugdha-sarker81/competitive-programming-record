/*link : https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-09/challenges/get-prefix-sum/problem?isFullScreen=true
question:
i got am int array and have to print the prefix sum for this array in reverse order.
answer:
take an array as the same size as given array . and have to put the sum of index 0 to i , on the position i. 
and lastly print the sum array in reverse order. note: the first value of both array is same ;
time complexity: O(N)
*/

#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    int n; cin>>n;
    vector<ll>ara(n);
    vector<ll>pre(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>ara[i];
         sum += ara[i];
        pre[i]= sum;
    }
    for(int i=n;i>0;i--){
        cout<<pre[i-1]<<" ";
    }
    return 0;
}
