#include <stdio.h>
int main(){
    int s,r;
    printf("Enter size od array:");
    scanf("%d",&s);
    int a[s];
    printf("Enter elements in array:");
    for(int i=0;i<s;i++) scanf("%d",&a[i]);
    printf("Enter rotation no:");
    scanf("%d",&r);
    int a1[r];

    for(int i=0;i<r;i++){a1[i]=a[i];}
    for(int i=r,n=0;i<s;i++){
        a[n]=a[i];
        n++;
    }
    for(int i=1,n=0;i<=r;i++){
        a[r+i] = a1[n];
        n++;
    }
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    



























}