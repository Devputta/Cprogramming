#include<stdio.h>

int unicnum(int num[], int n);

int main(){
    int num[] = {1,2,4,2,5,6,7,4,1,6,7};

   
    printf("%d\t ", unicnum(num, 8));

    return 0;
}

int unicnum(int num[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans ^ num[i];
    }
    return ans;
}