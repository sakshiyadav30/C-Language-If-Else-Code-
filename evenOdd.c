#include<stdio.h>
int main(){
    printf("Sakshi Yadav\n");
    int number;
    printf("Enter Number :");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is even");
    }else{
        printf("The number is odd");
    }
    return 0;
} 