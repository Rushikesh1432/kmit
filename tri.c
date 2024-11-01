#include <stdio.h>
int main(){
    int n,m=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        if(i==n-1) break;
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf("#");
        for(int z=1;z<i+m;z++){
            printf(" ");
            
        }m++;
        if(i>0){printf("#");}

         printf("\n");}
    
    for(int i=0;i<n;i++) printf("# ");




}