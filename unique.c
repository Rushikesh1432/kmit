
//1 2 3 3 3
#include <stdio.h>
int main(){
    int s;
    printf("Enter size of array:");
    scanf("%d",&s);
    int arr[s];
    
    for(int i=0;i<s;i++){
        
        scanf("%d",&arr[i]);
    }

for(int i=0;i<s;i++){
    int j;
    for(j=0;j<s;j++){
        if(arr[i]==arr[j] && i!=j){
            break;
        }
        
    }
    if(j==s){
        printf("%d ",arr[i]);
    }
        
        
    }
}











