//Version D - june Array//

#include <stdio.h>

#define SIZE 5 

//main function
int main(void) {
  
  //declare a variable
  int a;
  double  sales[SIZE];
  double sale=0,allowance;
  //Initialize all the array elements to 0.
  for(a=0;a<5;a++)
   sales [a]=0; 
   
  
  for (a=1;a <=SIZE;){
    //user input value
    printf("Input the sales of salesmen %d: ", a);
    scanf("%lf", &sale); 

    if(sale <0){
      //If the user input a negative value
      printf("Please re-enter the amount\n");
      printf("\n");
      continue; //continue programme
    }//end if

    //check the allownce condition
    if(sale > 20000.00){
      
      sale += 5000;//sales allowance
    }//end if

    //store sale in to sales array
    sales[a-1] = sale;
    a++;
  }//end for loop

  //print Array
  printf("\nSales person number\t\tSales amount\n");
  for (a=1;a<=SIZE ;a++){

    printf("%d\t\t\t\t\t\t%.2f\n",a,sales[a-1]);
  }//end for loop


  return 0;
}//end main