#include<stdio.h>
int main(){
    int n,m=1;
    printf("Enter the Number: ");
    scanf("%d",&n);

    for(int i = 1 ; i<=n; i++){
        m *= i;
        //printf("%d\n",m);
    }
    printf("%d\n",m);
    return 0;
}