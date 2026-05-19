//https://codeforces.com/problemset/problem/133/A

#include<stdio.h>
int main()
{
    char text[101];
    fgets(text,sizeof(text),stdin) ;

    int n = strlen(text);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(text[i]=='H' || text[i]=='Q' || text[i]=='9'){
            flag++;
            break;
        }
    }

    if(flag==0){
        printf("NO");
    }
    else{
    printf("YES");
}
    return 0;
}
