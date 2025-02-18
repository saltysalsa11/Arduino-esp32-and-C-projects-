#include <stdio.h>

void potat(int *p){
    do
    {
        int tick;
        
        printf("the value inputed is %d", *p);
        *p = *p - 1;
    } while (*p > 0);

}


int main(){
    int lightyouty;
    puts("enter sensor value:");
    scanf("%d", &lightyouty);
    potat(&lightyouty);

    return(0);
}

