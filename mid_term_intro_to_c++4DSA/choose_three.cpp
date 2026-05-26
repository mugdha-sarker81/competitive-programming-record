//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-09/challenges/choose-three

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n , s,m=0;
        cin>>n >> s;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>> ar[i];
        }
        if(n>2)
        {  
            for(int i=0;i<=n-3;i++)
            {
                for(int j=i+1;j<=n-2;j++)
                {
                    for(int z=j+1;z<=n-1;z++)
                    {
                        if((ar[i]+ar[j]+ar[z]) ==s)
                        {
                            m=1;
                        }
                    }
                }
            }
        }
       if(m==1){
            cout<< "YES"<<endl;
        }
        else if(m==0){
            cout<< "NO"<<endl;
        }
    }
    return 0;
}
