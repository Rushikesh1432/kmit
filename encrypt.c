/*ci=(pi+k)%26*/

#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main(){

char plain[100];
printf("Enter plain txt:");
scanf("%s",plain);

for(int i=0,len=strlen(plain);i<len;i++){
    if(isupper(plain[i])){ 
    int c = ((plain[i]-'A')+3)%26+'A';
    printf("%c",c);}
    else if(islower(plain[i])){
        int c = ((plain[i]-'a')+3)%26+'a';
    printf("%c",c);
    }
}






}