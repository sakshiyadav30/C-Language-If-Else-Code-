#include<stdio.h>
int main(){
    printf("Sakshi Yadav \n");
    int num1, num2, num3;

    printf("enter Number1 :");
    scanf("%d", &num1);
    printf("Enter Number2 :");
    scanf("%d", &num2);
    printf("Enter Number3 :");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("The maximum number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The maximum number is: %d\n", num2);
    } else {
        printf("The maximum number is: %d\n", num3);
    }
    return 0;
}