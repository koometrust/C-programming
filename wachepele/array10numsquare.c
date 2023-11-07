#include <stdio.h>
#include <stdlib.h>

int main (){

int num[10], i ;

for(i = 0; i<=9; i++){
    printf("Enter number %d: ", i+1);
    scanf("%d",&num[i]);
}
for(i = 0; i<10; i++){
printf("The square is:%d\n", num[i] * num[i]);

}


    return 0;
}