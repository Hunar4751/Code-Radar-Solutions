#include <stdio.h>
#include <string.h>

int main(){
    char str[100],d=0;
    scanf("%s",str);
   int l = strlen(str);
   char k[l];
   for(int i=l-1;i>=0;i++){
    k[i]=str[d];
    d+=1;
   }
   printf("%s",k);
    return 0;
}