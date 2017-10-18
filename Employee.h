#ifndef Employee_included
#define Employee_included

/*Structure definition*/
struct Employee {
  char name[40];
  char last[40];
  struct Employee * left;
  struct Employee * right;
}; 

/*Change that type definition*/
typedef struct Employee Employee;

/*Funtion Declarations*/
Employee * dataBaseInit();

void printDataBase(Employee *iter);

void insert(char nameN[], char lastN[], Employee **iter);

Employee * fileReader();

void fileWritter(Employee *iter);
#endif
