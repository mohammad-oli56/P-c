#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", a, b); 
    // printf("%s %s\n", a, b);

    int i = 0;
    while (1) {
       
        if (a[i] == '\0' && b[i] == '\0') {
            printf("Equal\n");
            break;
        }
        else if(a[i] == '\0'){
            printf("A is smaller1");
            break;
        }
        else if(b[i] == '\0'){
            printf("B is smaller2");
            break;
        }
        else if( a[i]<b[i])
        {
            printf("A is smaller3");
            break;
        }
        else if( a[i]>b[i])
        {
            printf("B is smaller4");
            break;
        }
       
        i++;
    }
    return 0;
}
