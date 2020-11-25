//Version C - june Array//

#include <stdio.h>//main function

#define SIZE 5 //define array size

//main function
int main(void) {
  
  //define variable
  float  salaries[SIZE]={-1};//Initialize all the array elements to -1.
  float salary,increment;
  int count;
  
  
  for (count=1;count<=SIZE;){
    //input employee salary
    printf("Input the salary of employee %d :", count);
    scanf("%f", &salary); 

    if(salary <0){
      //check negative salary
      printf("Please re-enter the amount\n");
      printf("\n");
      continue;
    }

    if(salary <10000.00){
      //check below 10000.00
      increment = (salary *10/100);//calculate increment
      salary = salary+increment;//calculate total salary

    }
    salaries[count-1] = salary;//include value on array
    count++;
  }
  //print Array
  printf("\nEmployee number\t\t\tSalary\n");
  for (count=1;count<=SIZE ;count++){

    printf("%d\t\t\t\t\t\t%.2f\n",count,salaries[count - 1]);
  }


  return 0;
}