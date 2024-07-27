#include <stdio.h>


void cub(void);
void main(){
    cub();


}
void cub(){
    int a , res;
    printf("Enter your Number : ");
    scanf("%d",&a);
    res = a * a * a;
    printf("The cube of %d is %d \n",a ,res);


}
