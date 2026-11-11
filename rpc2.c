#include<stdio.h>

float caltemp(float cal);

int main(){
    printf("%f\n",caltemp(37));
    return 0;
}

float caltemp(float cal){
    float far = cal * (9.0/5.0) + 32;
    return far;

}