//https://www.hackerrank.com/contests/phitron-codefest-01-a-batch-09/challenges/divisibility-by-3-2-1

#include<stdio.h>
int main()
{
    int n;
    char t[1000001];
    scanf("%d %s",&n,&t);
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum += t[i]-'0';
    }
    
    
    if( sum%3==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
