#include <stdio.h>
int main(){
    int s;
    printf("Size of array:");
    scanf("%d",&s);
    int a[s];
    printf("Enter the numbers:");
    for(int i=0;i<s;i++) scanf("%d",&a[i]);

    for(int i=0;i<s;i++){
       for(int j=i+1;j<s;j++){if(a[i]<a[j]){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
        else if(a[i]>a[j]) break;
        }
    }
    printf("Sorted array in decending order:");
for(int i=0;i<s;i++) printf("%d ",a[i]);













}