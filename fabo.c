#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int one=1,zero=0,sum=0;
    printf("0+1+");

for(int i=0;i<n;i++){
    int temp=one+zero;
    if(i==n-1){printf("%d",temp);}
    else{printf("%d+",temp);}
    sum=sum+temp;
    zero=one;
    one=temp;
}
printf("=%d",sum+1);
}