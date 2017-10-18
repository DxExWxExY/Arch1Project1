#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"
#include "functions.c"

int main () {
  /*User interface options menu*/
  printf("**********************************************************\n");
  Employee * data = malloc(sizeof(Employee));
  data = dataBaseInit(); //initializes first node
  printf("Welcome to ACME Employee Database. Please select an option");
  printf("\n1. Add Employee\n2. Delete Employee\n3. Search for Employee");
  printf("\nSelection: ");
  char options = '0';
  scanf("%c", &options);
  switch (options) {
  case '1':
    //calls the insert method
    printf("Adding Employee...\n");
    printf("Please Enter First Name: ");
    char nameN[40];
    scanf("%s", nameN);
    printf("\nPlaese Enter Last Name: ");
    char lastN[40];
    scanf("%s", lastN);
    insert(nameN, lastN, data);
    printDataBase(data);
    break;
  case '2':
    //calls remove method
    printf("Removing Employee...\n");
    break;
  case '3':
    //calls search method
    printf("Searching Employee...\n");
    break;
  default:
    printf("Invalid Option, Try Again\n");
    int recall = main();
    break;
  }
  return 0;
}
