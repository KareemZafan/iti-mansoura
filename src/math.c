#include <stdio.h>


doube div(double a , double b){
  if(b !=0 ) 
  return a / b ; 
  else exit(1) ; 
 }
 
 doube mul(double a , double b){
  return a * b ; 
 }
 
 int main(void){
 
  printf("%f / %f = %f", 10,2,div(10,2)); 
  printf("%f * %f = %f", 10,2,mul(10,2)); 
  
 return 0 ; 
 }
