#include<stdio.h>
#include<string.h>

struct  Address{
    int houseno;
    int block;
    char city[100];
    char state[100];          

};

void printadd(struct Address add);

int main(){
    struct  Address add[10]; 
    printf("Enter the 1 st Person Address 1. House No,2. Block,3. City,4. State\n");
    scanf("%d",&add[0].houseno);
    scanf("%d",&add[0].block);
    scanf("%s",add[0].city);
    scanf("%s",add[0].state);

    printf("Enter the 2nd Person Address 1. House No,2. Block,3. City,4. State\n");
    scanf("%d",&add[1].houseno);
    scanf("%d",&add[1].block);
    scanf("%s",add[1].city);
    scanf("%s",add[1].state);

    printf("Enter the 3rd Person Address 1. House No,2. Block,3. City,4. State\n");
    scanf("%d",&add[2].houseno);
    scanf("%d",&add[2].block);
    scanf("%s",add[2].city);
    scanf("%s",add[2].state);

    printf("Enter the 4th Person Address 1. House No,2. Block,3. City,4. State\n");
    scanf("%d",&add[3].houseno);
    scanf("%d",&add[3].block);
    scanf("%s",add[3].city);
    scanf("%s",add[3].state);

    for(int i =0; i<=3; i++){
        printadd(add[i]);
    }
    

    return 0;
}

void printadd(struct Address add){
    printf("Address: HNO: %d ,Block No: %d ,City: %s ,State: %s\n",add.houseno, add.block, add.city, add.state);
}




