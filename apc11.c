#include<stdio.h>

//int odd(int arr[], int n); // odd in an given array 

int main(){
    int arrs[] = {1,3,5,7,9,21};

    

    printf("%d\n ", *(arrs+2));
    printf("%d\n ", *(arrs+9)); // 0 size it size exiseed


}

// int odd(int arr[], int n){
//     int count = 0;
//     for(int i =0; i<=n; i++){
//         if(arr[i] % 2 != 0){
//             count++;
//         }
//     }
//     return count;
// }