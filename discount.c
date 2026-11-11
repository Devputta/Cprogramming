#include<stdio.h>


float dis(float p, float d);

int main(){
    float p,d;
    printf("Enter  the prise :");
    scanf("%f",&p);
    printf("Enter the discount: ");
    scanf("%f",&d);


    printf("%f\n",dis(p, d));

    return 0;
}

float dis(float p, float d){
    float val = (p * d) /100;
    float ap = p-val;
    
    return ap;
}