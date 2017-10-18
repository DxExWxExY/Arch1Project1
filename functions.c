#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"

/*Function to print tree inorder*/
void printDataBase(Employee *iter) {
  if(iter) {
    printDataBase(iter->left);
    printf("\nEmployee %s, %s", iter->last, iter->name);
    printDataBase(iter->right);
  }
  
}

/*This will create the first node, this a deafult node*/
Employee* dataBaseInit() {
  Employee * root = malloc(sizeof(Employee));
  strcpy(root->name, "Lizzie");
  strcpy(root->last,"McGuire");
  root->left = NULL;
  root->right = NULL;
  return root;
}

/*Inserts a new name*/
void addEmployee(Employee **iter) {
  printf("Please Enter First Name: ");
  char nameN[40];
  scanf("%s", nameN);
  printf("\nPlaese Enter Last Name: ");
  char lastN[40];
  scanf("%s", lastN);
  /*this checks if a name comes before or after our root*/
  insert(nameN,lastN,&iter);
}
insert(char nameN[], char lastN[], Employee *iter) {
  if ((*iter == NULL)) {
    (*iter) = (Employee*)malloc(sizeof(Employee));
    strcpy((*iter)->name,nameN);
    strcpy((*iter)->last,lastN);
    (*iter)->left=NULL;
    (*iter)->right= NULL;
  }
  int cmp = strcmp((*iter)->last, lastN);
  //left
  if (cmp < 0) {
    insert(nameN, lastN, &(*iter)->left);
  }
  //right
  if (cmp > 0) {
    insert(nameN, lastN, &(*iter)->right);
  }
}
