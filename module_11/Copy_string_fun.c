#include<stdio.h>
#include<string.h>
int main(){
    char n[101],m[101];
    scanf("%s %s",&n,&m);
    strcpy(n,m);
    printf("%s %s",n,m);
    return 0;
}