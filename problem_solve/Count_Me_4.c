#include<stdio.h>
int main(){
    char a[10000];
    scanf("%s",a);
    for(char c='a';c<='z';c++){
        int count =0;
       for(int i=0;a[i]!='\0';i++){
            if(a[i]==c){
                count++;
            }
       }
      if(count > 0){
        printf("%c - %d\n",c,count);
      }
    }
    return 0;
}