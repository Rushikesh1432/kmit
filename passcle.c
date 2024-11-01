#include <stdio.h>
int fac(int a);

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int z=0;z<n-1-i;z++){
            printf(" ");
        }

        for(int j=1;j<=i+1;j++){

            printf("%d",fac(n)/(fac(n-j)*fac(n)));
        }
        printf("\n");





    }


}

int fac(int a){
    int fac=1;
    while(a>0){
        fac=fac*a;
        a--;
    }
    return fac;
}