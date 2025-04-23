#include<stdio.h>
#include<string.h>
int main(){
    char n[101],m[101];
    scanf("%s %s",&n,&m);
    // int langth_n =;
    // int langth_m = ;
   
    for(int i=0; i<=strlen(m); i++)
    {
     n[i+ strlen(n)] = m[i];
    }
    printf("%s %s",n,m);
    return 0;
}
