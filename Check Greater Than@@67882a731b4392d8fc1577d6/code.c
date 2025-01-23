#include <stdio.h>

int main() {
    int a,b;
    scnaf("%d %d",&a,&b);
    if (a>b){
        printf("%d\n",1);
    }else{
        printf("%d",0);
    }
    return 0;
}