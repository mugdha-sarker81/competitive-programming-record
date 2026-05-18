//https://codeforces.com/contest/160/problem/A  

#include<stdio.h>
int main()
{
    int t ,total=0;
    scanf("%d",&t);
    int ar[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&ar[i]);
        total += ar[i];
    } 
    
    for(int i=0;i<t;i++){
        for(int j=i+1;j<t;j++){
            if(ar[i]<ar[j]){
                int tem =ar[i];
                ar[i]=ar[j];
                ar[j]=tem;
            }
        }
    }
 
    int taken=0,count=0;
    for(int i=0;i<t;i++)
    {
        taken+=ar[i];
        total-=ar[i];
        count++;
 
        if(taken>total){
            break;
        }
    }
    printf("%d",count);
    return 0;
}
