#ifndef Employee_included
#define Employee_included

/*Structure definition*/
typedef struct Employee {
  char name[40];
  char lastName[40];
  struct Employee *left;
  struct Employee *right;
}Employee;

#endif
