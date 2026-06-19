//https://www.hackerrank.com/contests/phitron-code-fest-2-b9/challenges/treasure-in-the-grid/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,q; cin>>n>>m>>q;
    int ara[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ara[i][j];
        }
    }
    while(q--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        int sum=0;
        for(int i=a;i<=c;i++){
            for(int j=b;j<=d;j++){
                sum+=ara[i][j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
