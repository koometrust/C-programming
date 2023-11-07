// switch case to move between the three meal options
//use logic to be able to calculate the value of someones total meal choice from the meal plan provided
// then the total cost of they're meal 

#include <stdio.h>
#include <stdlib.h>

void header(){
    printf("Welcome to Koome Meals\n");

}


int breakfast() {
    int Tea = 10;
    int Bread = 20;
    int Mandazi = 10;
    int uji = 15;
    int sum = 0;

    printf("For Breakfast we have:\n");
    printf("1. Tea - $%d\n", Tea);
    printf("2. Bread - $%d\n", Bread);
    printf("3. Mandazi - $%d\n", Mandazi);
    printf("4. Uji - $%d\n\n", uji);

    int choice;
    while (1) {
        printf("Make your selection (0 to finish): ");
        scanf("%d", &choice);
        if (choice == 0) {
            break;
        }
        switch (choice) {
            case 1:
                sum += Tea;
                break;
            case 2:
                sum += Bread;
                break;
            case 3:
                sum += Mandazi;
                break;
            case 4:
                sum += uji;
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    printf("Your total cost for breakfast is: $%d\n", sum);
    return sum;
}




int lunch(){

}

int supper (){

}


int main (){
header ();
char meal[20];

printf("choose your meal? ");
scanf("%s", meal);

switch (meal[0]){
    case 'B':
    case 'b':
    breakfast();
    break;

    case 'L':
    case 'l'
    lunch();
    break;

    case 'S':
    case 's':
    supper();
    break;


}

    return 0;
}


