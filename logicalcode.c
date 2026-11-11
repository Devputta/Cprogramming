#include<stdio.h>
// its a logical operators 
// && (AND) bothe should be correct if any one false then whole condition false 

int main(){
    printf("%d \n", 4>3 && 5>2); // its for logicl && (AND) operator 
    printf("%d \n", 4>4 && 5>2); // its false 0
    // logical operator || (or) if any one true then all the condion is true 1
    printf("%d \n", 4>3 || 5>2); // its || (OR) its true 1
    printf("%d \n", 4>4 || 5>2); // its also true 1
    printf("%d \n", 4>4 || 5>10);// its false because bothe condition is false 0
    // ! (NOT opeator) its for fliping an any condition 
    printf("%d \n", 4>3); // its true 1
    printf("%d \n", !(4>3)); // its false 0
    printf("%d \n", !((4>3) && (5>2)));// its false 0 because bothe statement are true 
    printf("%d \n", !((4>3) && (5>10)));// its will be true because in condition there is only one condition is true so 
    // short not like in side if condition is getting false the in !(NOT) then its true 
return 0;
}