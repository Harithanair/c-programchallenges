#include <stdio.h>

int main(void) {
int count,x,y,h=0;
    char a[1000][1000],o[100000];
    scanf("%d",&count);
    for(x=0;x<count;x++)
    scanf("%s",a[x]);
    for(x=0;a[0][x];x++){
        for(y=1;a[y][x];y++){
            if(aos[y][x]!=a[y-1][x]){
                printf("%s",o);
                g=1;
                break;
            }
        }
        if(f==1)
        break;
        else
        o[x]=a[0][x];
    }
    return 0;
}
