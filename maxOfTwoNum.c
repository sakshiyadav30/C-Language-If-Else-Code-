#include<stdio.h>

int main (){
    printf("Sakshi Yadav \n");

    int num1, num2;
    printf("Enter Number1 : ");
    scanf("%d", &num1);
    
     printf("Enter Number2 : ");
    scanf("%d", &num2);
    
    if(num1 > num2){
        printf("%d is Maximum", num1);
    }else
    {
        printf("%d is Maximum", num2);
    }
    return 0;
}