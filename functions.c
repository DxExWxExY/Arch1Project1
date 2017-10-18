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
void insert(char nameN[], char lastN[], Employee **iter) {
  if ((*iter == NULL)) {
    (*iter) = malloc(sizeof(Employee));
    strcpy((*iter)->name,nameN);
    strcpy((*iter)->last,lastN);
    (*iter)->left=NULL;
    (*iter)->right= NULL;
  }
  int cmp = strcmp((*iter)->last, lastN);
  //left
  if (cmp > 0) {
    insert(nameN, lastN, &(*iter)->left);
  }
  //right
  if (cmp < 0) {
    insert(nameN, lastN, &(*iter)->right);
  }
}

/*Reads a file*/
void fileReader(Employee *iter) {
  FILE *file;
  char *nameB;
  char *lastB;
  char line[80];
  file = fopen("~/Project_1/employees.txt", "w+");
  if (file == NULL) {
    printf("\nEmpty File");
    return;
  }
  while(!feof(file)) {
    fgets(line, 80, file);
    lastB = strtok(line, ",");
    nameB = strtok(NULL, ",");
    insert(nameB, lastB, &iter);
  }
}
