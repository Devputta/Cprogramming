#include<stdio.h>
int main(){
    //integer diclaration pointer
    int age = 20;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d\n",_age);
    

    //character pointer diclaration 
    char ch = 'A';
    char *pch = &ch;
    char _ch = *pch;

    printf("%c\n",_ch);


    //float pointer diclaration
    float num = 10.00;
    float *pnu = &num;
    float _num = *pnu;

    printf("%f\n",_num);



    // Address Printing using %p or %u (unsigned int)

    printf("%p\n",age);
    printf("%u\n",age);
    printf("%p\n",&ptr);
    printf("%u\n",&ptr);
    printf("%u\n",_age);
    printf("%p\n",_age);

    

}