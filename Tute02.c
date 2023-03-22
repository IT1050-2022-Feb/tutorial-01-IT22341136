#include <stdio.h>

int main() {

  float distance ,rental;

  printf("Input the Distance :");
  scanf("%f",&distance);

  if(distance <=30 ){
  	
  	rental = 50.0 * distance;
  }
  else{
  	rental = ((distance - 30) * 40)+ (30 * 50);
  	
  }
  
  printf("Rental is %.2f",rental);
  return 0;
}