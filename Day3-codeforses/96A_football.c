//

#include<stdio.h>
int main()
{
    char play[101];
    scanf("%s",&play);
    
    int flag=0;
    int flag2=0;
    for(int i=0;i<strlen(play);i++)
    {
        if(play[i]=='1'){
            flag++;
            flag2=0;
        }
        else if(play[i]=='0'){
            flag=0;
            flag2++;
        }
        if(flag>=7 || flag2>=7){
            printf("YES");
            break;
        }
    }
    if(flag<7 && flag2<7){
        printf("NO");
    }

    return 0;
}
