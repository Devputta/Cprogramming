#include<stdio.h>
int main(){
    float price[3] = {100.0, 200.0, 300.0};//this is correct
    //float price[] = {100.0, 200.0, 300.0};//this is aiso correct here size is not mension 
    // printf("Enter the pricr for 3 items : ");
    // scanf("%f", &price[0]);
    // scanf("%f", &price[1]);
    // scanf("%f", &price[2]);

    printf("Total price 1 : %f\n", price[0]+((0.18)* price[0]));
    printf("Total price 2 : %f\n", price[1]+((0.18)* price[1]));
    printf("Total price 3 : %f\n", price[2]+((0.18)* price[2]));


    
    return 0;
}