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
  char nameN[40];
  char lastN[40];
  printf("Welcome to ACME Employee Database. Please select an option");
  printf("\n1. Add Employee\n2. Delete Employee\n3. Print Data Base");
  printf("\nSelection: ");
  char options = '0';
  int mainMenu = 0;
  scanf("%c", &options);
  switch (options) {
  case '1':
    //calls the insert method
    printf("Adding Employee...\n");
    printf("Please Enter First Name: ");
    scanf("%s", nameN);
    printf("\nPlaese Enter Last Name: ");
    scanf("%s", lastN);
    insert(nameN, lastN, &data);
    mainMenu = main();
    break;
  case '2':
    //calls remove method
    printf("Removing Employee...\n");
    printf("Please Enter First Name: ");
    scanf("%s", nameN);
    printf("\nPlaese Enter Last Name: ");

    mainMenu = main();
    break;
  case '3':
    //calls search method
    printf("Printing Employees...\n");
    printDataBase(data);
    mainMenu = main();
    break;
  case '4':
    printf("\nReading File...");
    mainMenu = main();
    break;
  case '5':
    printf("\nWritting File...");
    mainMenu = main();
    break;
  default:
    printf("Invalid Option, Try Again\n");
    mainMenu = main();
    break;
  }
  return 0;
}
