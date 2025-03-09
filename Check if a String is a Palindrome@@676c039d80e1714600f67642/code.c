#include <stdio.h>
#include <string.h>

int main(){
    char str[100],d=0;
    scanf("%s",str);
   int l = strlen(str);
   char k[l+1];
   for(int i=l-1;i>=0;i++){
    k[d]=str[i];
    d+=1;
   }
   k[d]='\0';
   if(k==str){
    printf("Yes");
   }else{
    printf("No");
   }
    return 0;
}