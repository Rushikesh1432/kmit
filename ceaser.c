#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

int arr[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

char* p1;
char* p2;
scanf("%c %c",p1,p2);



int score1=0,score2=0;
for(int i=0,len=strlen(p1);i<len;i++){
    if(isupper(p1[i])){
        score1=score1+arr[p1[i]-'A'];
    }
    else if(islower(p1[1])){
        score1=score1+arr[p1[i]-'a'];
    }

}

for(int i=0,len=strlen(p2);i<len;i++){
    if(isupper(p2[i])){
        score2=score2+arr[p2[i]-'A'];
    }
    else if(islower(p1[1])){
        score2=score2+arr[p2[i]-'a'];
    }

}

if(score1>score2) printf("Player 1 wins");
else if(score1<score2) printf("Player 2 Wins");
else printf("Draw");






















}