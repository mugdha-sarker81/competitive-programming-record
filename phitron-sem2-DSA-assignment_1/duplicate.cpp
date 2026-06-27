/* link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-09/challenges/duplicate-12/problem?isFullScreen=true
qustion:
i got an (int) array .if any of element(int) comes twice i have to print "YES" otherwise "NO"
ovservation:
lets take two index 0<i<n-1  and i+1<= j <n 
for n-1 times pick ara[i] and apply linear search if i found another int==ara[i] print "YES" and break.
othewise print "NO"

time complexity: O(n*n)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t,flag=0; cin>>t;
    vector<int> ara(t);
    for(int i=0;i<t;i++){
        cin>>ara[i];
    }
    for(int i=0;i<t-1;i++){
        for(int j=i+1;j<t;j++){
            if(ara[i]==ara[j]){
                flag=1;break;
            }
        }
    }
    if(flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
