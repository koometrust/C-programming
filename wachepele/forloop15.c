#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intro(){
    printf("Enter your 15 numbers in order to find a sum:\n");
}

int main (){

int num[15];
int sum = 0 ;

for(int i = 0; i < 15; i ++){
    intro();
    printf("Enter number %d: ", i + 1 );
    scanf("%d", &num[i]);
    sum += num[i];
}

printf("The sum of the 15 numbers is: %d\n", sum);


    return 0;
}