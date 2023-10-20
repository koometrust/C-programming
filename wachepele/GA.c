#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//write a program to calculate average and total score of students 

int main() {


int sub1, sub2, sub3;
char operation[10];
 //average is sum of the subjects divided by total subjects
// total score = sum of the subjects

printf("Input first subject score: ");
scanf("%d", &sub1);
printf("Input second subject score: ");
scanf("%d", &sub2);
printf("Input third subject score: ");
scanf("%d", &sub3);
printf("Do you want to perform sum, average or both: ");
scanf("%s", operation);

switch(operation[0]){
  case 's':
  case 'S':
  printf("The total score of the students is: %d \n", sub1 + sub2 + sub3);
  break;
  
  case 'A':
  case 'a':
  printf("Your Average is: %.2f \n", (sub1 + sub2 + sub3)/3.0);
  break;
  
  case 'b':
  case 'B':
  printf("Your sum and average are: %d and %.2f respectively\n ", sub1 + sub2 + sub3, (sub1 + sub2 + sub3)/3.0);
  break;

  default:
  printf("You have input incorrectly, Try Again!");
  break;

} 

    return 0;
}
