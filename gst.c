#include<stdio.h>

void gst(float n);

int main(){
    float n= 100.0;

    gst(n);

    return 0;
}

void gst(float n){
    float val = n + ((0.18)*n);
    printf("The final valu : %f",val);
}