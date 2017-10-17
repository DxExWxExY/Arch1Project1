#ifndef Employee_included
#define Employee_included

/*Structure definition*/
typedef struct Employee {
  char name[40];
  char lastName[40];
  Employee *left;
  Employee *right;
}Employee;

/*Root node builder. I picked this name because is the middle most
lastname in the alphabet*/
typedef struct EmployeeDef {
  char name[] = Lizzie;
  char lastName[] McGuire;
  Employee *left;
  Employee *right;
}EmployeeDef;


#endif
