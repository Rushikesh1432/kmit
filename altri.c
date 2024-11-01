#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=1;
    char a='A';

    for(int i=0;i<n;i++){
a='A';
c=1;
    for(int j=0;j<n-1-i;j++){
        printf(" ");
    }
    for(int z=0;z<2*i+1;z++){
        if(i%2==0){ 
        printf("%d ",c);
        c++;}
        else{
            printf("%i ",a);
            a++;
        }
    }



printf("\n");



    }






}