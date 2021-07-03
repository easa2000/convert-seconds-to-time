#include<stdio.h>
void main(){
    int total_seconds,hour,minutes,seconds;
    printf("\n Enter the total seconds: ");
    scanf("%d",&total_seconds);
    hour = total_seconds / 3600;
    minutes = (total_seconds - 3600) / 60;
    seconds = (total_seconds - 3600) % 60;
    printf("\n time: %d : %d : %d",hour,minutes,seconds);
}
