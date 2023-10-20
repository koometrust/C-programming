#include <stdio.h>
#include <stdlib.h>


double area(double radius){
    return 3.142 * (radius * radius);
}

int main(){

double radius;
printf("choose a radius: ");
scanf("%lf", &radius );
printf("The area of the circle is: %.2f\n",area(radius));

return 0;
}
