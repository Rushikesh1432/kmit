#include <stdio.h>
int main()
{
    int s;
    printf("Size:");
    scanf("%d",&s);
    int a[s];
    printf("Enter numbers in array:");
    for(int i=0;i<s;i++) scanf("%d",&a[i]);

    printf("Removed dublicate numbers:");
    for(int i=0;i<s;i++){
        int j;
        for(j=0+i+1;j<s;j++){
            if(a[i]==a[j] && i!=j){
                break;
            }
        }
        if(j==s) printf("%d ",a[i]);
        else if(j!=s){
            int k;
            for(k=0;k<i;k++){
                if(a[i]==a[k]) break;
               
            }
            if(k==i-1) printf("%d ",a[i]);
        }




    }





}