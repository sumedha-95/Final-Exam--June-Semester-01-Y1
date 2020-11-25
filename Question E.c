//Version E - Online exam june//
#include <stdio.h>

#define SIZE 6

int main(void) {
  //declare a vriable
  double price[6];
  double prices =0;
  int a;//counter veriable

  //beging for loop
  for (a=1;a<SIZE;){
    //user input
    printf("Input the price of book %d : ",a);
    scanf("%lf",&prices);

    if(prices <= 0){
      //check whether user input zero or negative
      printf("Please re-enter the amount\n");
      printf("\n");
      continue;//programme continue
    }//end if condition
    //check whether next condition
    else{
      prices += (prices*10)/100;//add reduce the price 
    }//end else condition
    //new price store the array
    price[a-1]=prices;
    a++;

  }//end for loop

  //print array
  printf("\n");//new line
  printf("Book ID\t\tPrice\n");//Arrat heading
  for (a=1;a<SIZE;a++){
    printf("\t%d\t\t%.2f\n",a,price[a-1]);//print array
  }

  return 0;
}//End main function