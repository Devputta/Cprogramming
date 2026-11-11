#include<stdio.h>
#include<string.h>

struct vectore{
    int x;
    int y;
};

void printsum( struct vectore v1, struct vectore v2, struct vectore sum);


int main(){
    struct vectore v1= {4,6};
    struct vectore v2= {6,7};
    struct vectore sum={0};

    printsum(v1, v2, sum);
     
    
    

    return 0;
}

void printsum(struct vectore v1, struct vectore v2, struct vectore sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("The sum of Vectore V1 is: %d\n",sum.x);
    printf("The sum of Vectore V2 is: %d\n",sum.y);

}




