#include<stdio.h>
int main(){
    int x;
    int isSunday = 1;
    int isSnowing = 1;
    int isMonday = 1;
    int isRainy = 1;
    printf("%d\n", isMonday || isRainy );
    printf("%d\n ", isSunday && isSnowing);
    printf("Enter the value for X :");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);
return 0;

}