#include<stdio.h>
int main(){
    int i,j,n,sum = 0;
    printf("ENter Number :");
    scanf("%d",&n);
    for(i=0, j=n; i<=n && j>=0; i++, j--){
        sum += i;
        printf("%d\n",j);
    }
     printf("%d\n",sum);

return 0;
}