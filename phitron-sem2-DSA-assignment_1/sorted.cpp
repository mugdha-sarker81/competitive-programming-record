/* link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-09/challenges/sorted-2-2/problem?isFullScreen=true
question: 
i got an int array. if that array is sorted print "YES" otherwise "NO"
anser:
use a loop for the size of the array if any ara[index+1] comes out smaller than ara[index} print "NO" otherwise "YES".
time complexity: O(N)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t; cin>>t; 
    while(t--)
    {
        int n; cin>>n;
        vector<int> ara(n);
        for(int i=0;i<n;i++){
            cin>>ara[i];
        }
        bool flag= true;
        for(int i=0;i<n-1;i++){
            if(ara[i+1]<ara[i]){
                flag = false;
            }
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
