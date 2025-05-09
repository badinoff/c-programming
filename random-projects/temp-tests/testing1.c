#include <stdio.h>
#include <string.h>
#include "header.h"

int main(){

    char childname[14] = "Thomas";
    int age;

    printf("%s have %d kids\n", FAMILY, KIDS);

    age = 11;
    printf("The oldest, %s, is %d.\n", childname, age);

    age = 6;
    strcpy(childname, "Christopher");
    printf("The middle boy, %s, is %d.\n", childname, age);

    age = 3;
    strcpy(childname, "Benjamin");
    printf("The youngest, %s, is %d\n", childname, age);

    return 0;
}