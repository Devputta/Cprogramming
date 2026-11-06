#include<stdio.h>
// switch code like days from 1 to 7 like monday to sunday

int main(){
    int day;//days from 1 to 7
    printf("Enter the Day Numbers from (1 to &) : ");
    scanf("%d", &day);

    switch (day){
        case 1 : printf("Monday");
                 break;
        case 2 : printf("Tuesday");
                 break;
        case 3 : printf("Wednesday");
                 break;
        case 4: printf("Thrusday");
                 break;
        case 5 : printf("Friday");
                 break;
        case 6 : printf("Saturday");
                 break;
        case 7 : printf("Sunday");
                 break;
        default : printf("NO NEED");
    }
    return 0;
}