#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int imag;
};


int main(){
    struct complex number1 = {4,6};
    struct complex *ptr = &number1;

    printf("The real number is: %d\n",ptr->real);
    printf("The imaginary numbe is: %d\n",ptr->imag);
     
    
    

    return 0;
}





