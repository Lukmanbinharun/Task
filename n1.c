#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    for (int m = 1; m <= n; m++)
    {
        if(m == 1){
            for (int i = 1; i < n; i++)
            {
                printf("%d",i);
            }
            
        }
        else if(m == n){
            for (int i = 1; i < n; i++)
            {
                printf("%d",n);
            }
            
        }

        else{
            printf("%d",m);
            for (int i = 0; i < n - 2; i++)
            {
                printf(" ");
            }
            
        }
        printf("%d\n",n);
    }
    
    return 0;
}