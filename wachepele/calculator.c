#include <stdio.h>

int Add(int num1, int num2){
    return num1 + num2;
}

int main() {
int num1, num2;

printf("Enter first Number: ");
scanf("%d", &num1);
printf("Enter second Number: ");
scanf("%d", &num2);

printf("The sum is: %d\n", Add(num1,num2));

return 0;
}
