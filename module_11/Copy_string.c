#include<stdio.h>
#include<string.h>
int main(){
    char n[101],m[101];
    scanf("%s %s",&n,&m);
    int length = strlen(m);
    for(int i=0; i<=length; i++)
    {
     n[i] = m[i];
    }
    printf("%s %s",n,m);
    return 0;
}