#include<stdio.h>

float circle(float r);
float square(float side);
float tri(float a,float b);

int main(){
    float a= 10;
    float b =10;
    float side = 1;
    float r = 10;

    printf("the area of a circle %f\n",circle(r));
    printf("The area of a square %f\n", square(side));
    printf("The area of a triangle %f\n", tri(a,b));

return 0;

}

float circle(float r){
    return 3.14 * r * r;
}

float square(float side){
    return side *side;

}

float tri(float a, float b){
    return a * b;
}