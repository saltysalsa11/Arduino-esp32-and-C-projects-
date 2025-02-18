#include <stdio.h>


void go_south_east(int* lat, int* lon){
    *lat = *lat + 1;
    *lon = *lon - 1;
    
}

int main(){
    int longitude = 32;
    int latitude = -64;
    
    go_south_east(&latitude, &longitude);
    printf("now at:[%i,%i]\n", latitude, longitude);
    return(0);
}

