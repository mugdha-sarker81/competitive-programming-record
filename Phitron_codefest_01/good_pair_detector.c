//https://www.hackerrank.com/contests/phitron-codefest-01-a-batch-09/challenges/good-pair-detector

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if((a[i]%2==0 && a[j]%2!=0) || (a[j]%2==0 && a[i]%2!=0)) 
           {
            flag++;
           }
        }
    }
    printf("%d",flag);
    return 0;
}
