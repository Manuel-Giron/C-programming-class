#include <stdio.h>
int main(){
    int b = 1;
    
    for (int i=0; i<10; i++) {
        b++;
    }
    printf("hello world\n"); // \n = new line, escape sequence 
    printf("\tI am ready to code!\n");
    printf("%d\n",b);
    while(b<20){
        float g =  11 + b / 8.0;
        printf("%f\n",g);
        b++;
    }
    return 0;
}