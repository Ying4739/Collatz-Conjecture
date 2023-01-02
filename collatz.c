#include <stdio.h>

int main()
{
    int x;
    printf("Input one value!\n");
    scanf("%d", &x);
    while(x!=1){
        if(x%2!=0){
            x=(3*x)+1;
            printf("%d\n",x);
        }
        if(x%2==0){
            x=x/2;
            printf("%d\n",x);
        }
    }
    printf("%d\n",x);
    return 0;
}
