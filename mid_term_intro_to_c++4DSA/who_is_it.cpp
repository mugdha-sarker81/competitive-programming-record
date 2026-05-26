//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-09/challenges/who-is-it-4

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t ;
    while(t--)
    {
        int id1=4, mark1=-1;
        string name1 ="A"; char sec1='A';

        for(int i=0;i<3;i++)
        {
            int id , mark;
            string name ;
            char sec;
            cin>> id>>name >> sec >> mark;
        
            if(mark>mark1 || (mark==mark1 && id<id1))
            {
                id1 = id;
                mark1 = mark;
                sec1= sec;
                name1= name;
            }
        }
        cout << id1 <<" "<< name1 <<" "<< sec1 << " "<<mark1 << endl;

    }
    return 0;
}
