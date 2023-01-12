#include<stdio.h>

int main(){
    char s[50];
    scanf("%s",s);
    // printf("%s",s);
    int size;

    for (int i = 0; i < 100; i++)
    {
        if(s[i] == '\0'){
            size = i;
            break;
        }
    }
    // printf("%d\n",size);

    int count[size];

    for (int i = 0; i < size; i++)
    {
        count[i] = 1;
        if(s[i] == '*'){
            count[i] = 0;
            continue;
        };
        for(int j = i + 1; j < size; j++ ){
            if(s[i] == s[j]){
                count[i]++;
                s[j] = '*';
            } 
        }
    }

    
    for (int k = 0; k < size; k++)
    {
        int max = 0;
        char seclet;
        int now;
        
        for(int x = 0; x < size; x++){
            if(count[x] > max){
                max = count[x];
                seclet = s[x];
                now = x;
            }
            else if(count[x] == max && max != 0){
                if(seclet > s[x]){
                    seclet = s[x];
                    now = x;
                }
            }
        }
        count[now] = 0;
        if(max == 0) break;
        for (int i = 0; i < max; i++)
        {
            printf("%c",seclet);
        }
        
    }
    
    
    
    
    return 0;
}