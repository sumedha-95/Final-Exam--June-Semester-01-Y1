//june version B//
#include <stdio.h>

int main()
{ //Declare the varialble
  int i,j;
  int seat[5];

  //Initialize all the array elements to zero
  for(i=0; i<5; i++)
  seat [i]=0;

  //read the marks to array
 
  for(i=0; i<5; i++)
  {
    printf("Pls input the seat number (1 - 10) %d : ",i+1);
    scanf("%d",&seat[i]);

    for (int j =0; j < i ; j++)
   {
      
      if (seat[i]==seat[j])
      {
         
         printf("Sorry. The seat %d is reseved.",seat[i]);
         return -1;
      }
   }
      
       if(!(seat [i]>=1 && seat[i]<=10))
      {    
          printf("Sorry... Please input a valid seat number.\n");
          return -1;
      }  
  }
  printf("**************************\n");
    printf("Reserved seat numbers\n");
      for(i=0; i<5; i++)
        {
          printf("%d \n",seat[i]);
  
        }
      
  return 0;
}
