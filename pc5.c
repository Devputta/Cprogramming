#include<stdio.h>
int main(){
    int j,n,sum = 0;
    printf("ENter Number :");
    scanf("%d",&n);
    for(j=n; j>=0; j--){
        sum += j;
        printf("%d\n",j);
    }
     printf("%d\n",sum);

return 0;
}