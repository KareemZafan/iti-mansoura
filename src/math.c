#include <stdio.h>
#include <math.h>



double add(double a , double b){
  return a + b; 
 }
 
 double getSquareRoot(int a){
  return sqrt(a); 
 }
 
 int main(void){
 
  printf("%f + %f = %f", 10,2,add(10,2)); 
  printf("sqrt(%d) = %f",sqrt(400)); 
  
 return 0 ; 
 }
