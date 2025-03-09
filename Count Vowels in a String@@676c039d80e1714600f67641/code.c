#include <stdio.h>
#include <string.h>

int main(){
    char str[100],d=0;
    scanf("%s",str);
   int l = strlen(str);
   for(int i=0;i<l;i++){
    char c=str[i];
    if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U'){
        d+=1;
    }
   }printf("%d",d);
    return 0;
}