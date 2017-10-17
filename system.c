#include <stdio.h>
//#include "Employee.h"

int main () {
  /*User interface options menu*/
  printf("**********************************************************\n");
  printf("Welcome to ACME Employee Database. Please select an option");
  printf("\n1. Add Employee\n2. Delete Employee\n3. Search for Employee");
  printf("\nSelection: ");
  char options = '0';
  scanf("%c", &options);
  switch (options) {
  case '1':
    //calls the insert method
    printf("Adding Employee...");
    break;
  case '2':
    //calls remove method
    printf("Removing Employee...");
    break;
  case '3':
    //calls search method
    printf("Searching Employee...");
    break;
  default:
    printf("Invalid Option, Try Again\n");
    int recall = main();
    break;
  }
  
  return 0;
}
