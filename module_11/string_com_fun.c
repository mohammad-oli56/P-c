#include<stdio.h>
#include<string.h>
int main(){
    char a[101], b[101];
    scanf("%s %s", a, b);

   int vlu = strcmp(a,b);

   if(vlu < 0){
    printf("%s",a);
   } else if(vlu == 0){
    printf("%s",a);
   }else {
    printf("%s",b);
   }
    return 0;
}