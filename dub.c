#include <stdio.h>
 void main(){
     int i=0,n,u=0,b,k=1;
     int c;
     printf("Enter n: ");
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++){
        printf("Enter value %d: ",k);
         scanf("%d",&a[i]);
         k++;
     }
     k=0;
     printf("Repeated values are: ");
     for(i=0;i<n;i++){
         for(b=i+1;b<n;b++){
                 if(a[i]==a[b]){
                     break; }
         }
         if(b!=n){ 
             for(u=0;u<i;u++){
                if(a[i]==a[u]){
                    break;
               }
             } 
             if(u==i){
                printf("%d ",a[i]);
                k++;
              }
             }
     }
     printf("\nNo.of values which are duplicated: %d", k);
 }