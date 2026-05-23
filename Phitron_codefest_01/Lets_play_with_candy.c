//https://www.hackerrank.com/contests/phitron-codefest-01-a-batch-09/challenges/lets-play-with-candy

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    } 
    int max=0;
    for(int i=0;i<t;i++)
    {
       if(arr[i]==max) 
       {
        max++;
       }
    }
    printf("%d",max);
    return 0;
}
