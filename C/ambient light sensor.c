void checker(int *p){

    if ((*p < 0.5) && (*p >= 0)){
        puts("lights on");
    } else if ((*p > 0.5) && (*p <= 1)){
        puts("lights off");
    } else {
        puts("sensor values out of pocket");
    }


}

void input(){
    float lightyouty;
    puts("enter sensor value:");
    scanf("%d", &lightyouty);
    checker(&lightyouty);



}


int main(){
    for (int i = 0; i < 3; i++)
    {
        input();
        break;
    }
    return(0);
}