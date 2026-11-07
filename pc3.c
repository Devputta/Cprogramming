#include<stdio.h>
int main(){
    int i,n,sum = 0;
    printf("ENter Number :");
    scanf("%d",&n);
    for(i=0; i<=n; i++){
        sum += i;
        //printf("%d\n",sum);
    }
     printf("%d\n",sum);

    for(i = n; i>=1; i--){
        printf("%d\n",i);
    }
return 0;
}