//june version A//
#include <stdio.h>

int main()
{ //Declare the varialble
  int i;
  int rate[5];

  //Initialize all the array elements to zero
  for(i=0; i<5; i++)
  rate [i]=0;

  //read the marks to array
  for(i=0; i<5; i++)
  {
    printf("Pls input the service rating (1- 5) %d : ",i+1);
    scanf("%d",&rate[i]);

     if(!(rate[i]>=1 && rate[i]<=5))
      {    
          printf("Invalide input\n");
          return -1;
      }  
  }

  //New Line
  printf("******************************************\n");

  //Display the total respond
  printf("%5s%23s\n","Element","Number of response\n");
  //print the value of student mark
  for(i=0; i<5; i++)
  {
  printf("%3d%13d\n",i+1,rate[i]);
  }
  
  return 0;
}