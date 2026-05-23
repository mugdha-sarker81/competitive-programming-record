//https://www.hackerrank.com/contests/phitron-codefest-01-a-batch-09/challenges/merge-by-index

#include<stdio.h>
int main()
{
    char a[2005],b[1001] ;
    int n,m;
    scanf("%[^\n]\n",&a);
    scanf("%[^\n]\n",&b);
    scanf("%d %d",&n ,&m);

    int len = strlen(a);

    for(int i=n;i<=m;i++)
    {
        a[len]= b[i];
        len++;
    }
    a[len]= '\0';
    printf("%s",a);
    return 0;
}
