//https://www.hackerrank.com/contests/phitron-codefest-01-a-batch-09/challenges/mirror-sum/problem

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        a[i]= a[i]+b[n-1-i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
