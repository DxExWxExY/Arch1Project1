#ifndef Employee_included
#define Employee_included

/*Structure definition*/
struct Employee {
  char name[40];
  char lastName[40];
  struct Employee* left;
  struct Employee* right;
}; 

typedef struct Employee Employee;

/*Funtion in charge of the first insertion*/


#endif
