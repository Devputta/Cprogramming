#include<stdio.h>
int main(){
    int i=1;
    // incremental operator 
    printf("%d\n", i++);//means use first then increment the value of i
    printf("%d\n",i);

    // ++i
    printf("%d\n", ++i);//means increment the value of i first then use it 
    printf("%d\n",i);
return 0;
}