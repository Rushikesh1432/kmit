#include <stdio.h>
int main(){
    int s1,s2;
    printf("Size of 1:");
    scanf("%d",&s1);
    printf("Size of 2:");
    scanf("%d",&s2);
    int sum=s1+s2;
    int arr[sum];
    for(int i=0;i<sum;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<sum;i++){
        for(int j=i+1;j<sum;j++){
            if(arr[i]<arr[j]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else break;
            
           
            
        }
    }

    for(int i=0;i<sum;i++){
        printf("%d ",arr[i]);
        }



















}