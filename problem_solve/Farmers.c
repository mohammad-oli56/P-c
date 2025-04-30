#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
   
    for(int i=0;i<t;i++){
        int m1,m2,D;
        scanf("%d %d %d",&m1,&m2,&D);
        int total = m1*D;
        int newtotal = total/(m1+m2);
        int final = D - newtotal;
        printf("%d\n",final);
    }
   
    return 0;
}