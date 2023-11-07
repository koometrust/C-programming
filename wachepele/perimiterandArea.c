#include <stdio.h>
#include <stdlib.h>

int main (){

int length[10], width[10], i ;

for(i = 0; i<10; i++){
    printf("Enter length %d: ", i+1);
    scanf("%d",&length[i]);
}
for(i = 0; i<10; i++){
    printf("Enter width %d: ", i+1);
    scanf("%d",&width[i]);
}

for(i = 0; i<10; i++){
printf("The area is: %d\n", length[i] * width[i]);
printf("The perimeter is: %d\n", 2 *(length[i] + width[i]));


}

    return 0;
}