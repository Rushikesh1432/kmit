#include <stdio.h>
int main(){
    int s;
    printf("Size of array:");
    scanf("%d",&s);
    int a[s];
    printf("Enter the numbers:");
    for(int i=0;i<s;i++) scanf("%d",&a[i]);
    int c[s];

    for(int i=0;i<s;i++){
       for(int j=i+1;j<s;j++){if(a[i]>a[j]){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
        
        }
    }
    printf("Sorted array in accending order:\n");
    int count=0;
for(int i=0;i<s;i++){
printf("%d \n",a[i]);
 c[i]=a[i];
 count++;}
printf("second small elemets %d\n",a[1]);
printf("second large elemets %d\nTotal elemets in array %d",a[s-2],count);











}