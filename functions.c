#include <stdio.h>
#include <stdlib.h>

void hi(char name[], int age);

int main() {
    hi("Jude Koome Mwenda", 89);
    hi("Choxxi", 88);
    hi("Choxxi");



    return 0;
}

void hi(char name[], int age) {
    if (age == 0) {
        age = 30; // Set a default age (e.g., 30) when age is not provided
    }
    printf("Hello %s, you are %d years young\n", name, age);
}
