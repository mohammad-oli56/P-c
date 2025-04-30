#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
   
    for (int i = 0; i < t; i++) {
        int num = 0 ,B = 0 ,S =0;
        char s[10000];
        scanf("%s", s);

        for (int j = 0; s[j] != '\0'; j++) {

            if (s[j] >= 'A' && s[j] <= 'Z') 
            {
               B++;
            }
            else if(s[j]>='a'&& s[j]<='z')
            {
                S++;
            }
            else if (s[j]>='0'&&s[j]<='9')
            {
               num++;
            }
          
        }
        printf("%d %d %d\n",B,S,num);
    }
    
    return 0;
}
