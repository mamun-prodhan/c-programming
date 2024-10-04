#include<stdio.h>
#include<stdbool.h>

int main()
{

    int price = 60;

    if(price <= 50){
        printf("Buy 4 eggs\n");
        printf("Back %d Taka", 50 - price);
    }else{
        printf("Buy 2 Eggs");
    }

    return 0;

}
