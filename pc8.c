#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter te number :");
        scanf("%d",&n);
        printf("%d\n", n);

        if(n % 7 == 0){// 7 multiple
            break;
        }
    } while (1);
    printf("Thank You");
    return 0;
}