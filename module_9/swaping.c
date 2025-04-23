#include<stdio.h>
int main(){
    int a=100,b=20;
    int t=a;
    a=b;
    b=t;
    printf("a=%d b=%d",a,b);

    return 0;
}