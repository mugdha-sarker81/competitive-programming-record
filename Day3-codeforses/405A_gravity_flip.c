//https://codeforces.com/problemset/problem/405/A

#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    int box[n] ;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&box[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(box[i]>box[j]){
                int tem =box[i];
                box[i]=box[j];
                box[j]=tem;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",box[i]);
    }

    return 0;
}
