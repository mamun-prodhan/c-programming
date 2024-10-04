#include<stdio.h>
#include<stdbool.h>

int main(){

    int tourDays;
    scanf("%d", &tourDays);

    if(tourDays == 2){
        bool isBoatAvailable = true;

        if(isBoatAvailable){
            printf("Going to Tanguar Haur\n");
        }
        else{
            printf("Going to Srimangal\n");
        }
    }

    else if(tourDays == 4){
        bool isShipAvailable = false;

        if(isShipAvailable){
            printf("Going to Saint Martin\n");
        }
        else{
            printf("Going to Cox Bazar\n");
        }
    }
    else{
        printf("stay Home,,,,,,");
    }

    return 0;
}