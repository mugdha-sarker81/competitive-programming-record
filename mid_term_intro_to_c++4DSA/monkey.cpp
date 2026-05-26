//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-09/challenges/monkey-1-2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ar,tem;
    while(getline(cin,ar))
    {
        for(int i=0;i<ar.size();i++)
        {
            if(ar[i]!= ' ')
            {
                tem+= ar[i];
            }
        }
        sort(tem.begin(), tem.end());
        cout << tem << endl;
        tem= "";
        ar= "";
    }
    return 0;
}
