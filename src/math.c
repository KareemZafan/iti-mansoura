#include <stdio.h>
#include <math.h>


double div(double a , double b){
  if(b !=0 ) 
  return a / b ; 
  else exit(1) ; 
 }
 
 long abs(long a){
   retrun  (a < 0) ? (a * -1) :  a;    
 }
 
 
 
 double mul(double a , double b){
  return a * b ; 
 }

double add(double a , double b){
  return a + b; 
 }
 
 double getSquareRoot(int a){
  return sqrt(a); 
 }
 
 int main(void){

  printf("%f / %f = %f", 10,2,div(10,2)); 
  printf("%f * %f = %f", 10,2,mul(10,2)); 

  printf("%f + %f = %f", 10,2,add(10,2)); 
  printf("sqrt(%d) = %f",sqrt(400)); 
 return 0 ; 
 }
