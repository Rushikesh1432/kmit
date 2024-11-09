#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);

    
    int a[s];
    for(int i=0;i<s;i++) scanf("%d",&a[i]);
    int min1=a[0],min2;
    for(int i=1;i<s;i++){
        if(min1>a[i]){
            min1=a[i];
        }
    }
    
    for(int i=0;i<s;i++){
        int temp = a[i];
        for(int j=0;j<s;j++){
            if(temp<a[i] && i!=j && temp>min1){
                min2=temp;
            }
        }
    }
    printf("%d",min2);



















}