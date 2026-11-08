#include<stdio.h>

float calmarks(int math, int science, int sans);

int main(){
    int math = 80;
    int science = 90;
    int sans = 99;

    printf("%f\n",calmarks(math, science, sans));

    return 0;
}

float calmarks(int math, int science, int sans){
    return ((math+science+sans)/3);
}