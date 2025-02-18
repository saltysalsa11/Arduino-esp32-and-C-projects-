#include <stdio.h>

int main(){
    int diameter, height;
    float volume;
    printf("input diameter and height of cone, respectively.\n");
    scanf("%d %d", &diameter, &height);
    volume = (1/3)*3.14*((diameter/2)*(diameter/2))*height;
    printf("%d", &volume);
    return(0);
}