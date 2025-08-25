#include <stdio.h>

int main(){
    //create variable
    int first_number; 
    first_number = 5; 
    //2nd number
    int second_number;
    second_number = 8;
    //print value of variable
    
    printf("the first number is %d and the second is %d\n",first_number,second_number); // d conversion specific 
    
    //calculate sum
    int sum = first_number + second_number;
    printf("%d + %d = %d\n",first_number,second_number,sum);
    return 0; 
}
