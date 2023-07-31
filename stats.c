/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Statistics
 * Find the mean, median, minimum and maximum
 * 
 *
 * @author Martin Chirayath
 * @date 07/30/23
 *
 */



#include <stdio.h>
#include "stats.h"
#include <string.h>

/* Size of the Data Set */
#define SIZE (40)
int length;
int minimum;
int maximum;
float  mean;
float  median;
unsigned char test_arranged[SIZE];


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  memcpy( test_arranged,test,sizeof test_arranged);
  length = sizeof(test)/sizeof(test[0]);

  /* Other Variable Declarations Go Here */


  /* Statistics and Printing Functions Go Here */

     minimum = find_minimum(test,minimum,length);
     maximum = find_maximum(test,maximum,length);
     mean = find_mean(test,mean,length);
     median = find_median(test,median,length);
     print_statistics(minimum,maximum,mean, median);
     print_array(test);
     sort_array(test);
    
}

/* Add other Implementation File Code Here */
int find_minimum(unsigned char test[SIZE], int minimum, int length) {

  int i; 
  minimum = test[0];
  for(i = 1; i <=  length;i++) {
   
   if(test[i] <= minimum)
    minimum = test[i];
   else
    minimum = minimum;

   }
  return minimum;
}

int find_maximum(unsigned char test[SIZE], int maximum, int length) {

  int i;
  maximum = test[0];
  for(i = 1; i <=  length;i++) {
   
   if(test[i] >= maximum)
    maximum = test[i];
   else
    maximum = maximum;

   }

  return maximum;
}

int find_mean(unsigned char test[SIZE], float mean, int length) {

  int i;

  int  total = test[0];
  for(i = 1; i <=  length ; i++) {
   
   total += test[i];
   
   }
  mean = total/length;
  return mean;
}

int find_median(unsigned char test_arranged[SIZE], float  median, int length){

 int i;
 int j;
 int temp;
 
 for(i = 0 ; i< length-1 ; i++) { 

 for (j = 0; j < length-1 ; j++){

  if ( test_arranged[j] > test_arranged[j +1]) {
   
   temp = test_arranged[j];
   test_arranged[j] = test_arranged[j+1];
   test_arranged[j + 1] = temp;
   }
  }
 } 
 median = (test_arranged[length/2] + test_arranged[length/2 +1]) /2;
 return median;
}


int print_statistics(int minimum, int maximum, float mean, float median){

 printf("the minimum value is %d,maximum value is %d, mean value is %f,the median value is %f", minimum, maximum,mean,median);
}

int print_array(unsigned char test[SIZE]){

 for(int i = 0; i <= length; i++)
  printf("the value of array of is %d\n",test[i]);
}

int sort_array(unsigned char test[SIZE]){
 
 unsigned char test_sort [SIZE];
 memcpy(test_sort, test, sizeof test_sort);
 int temp;

 for(int i = 0;  i <length -1; i++){
  for(int j = 0; j< length -1 ; j++){
    if(test_sort[j]< test_sort[j+1]){
     temp = test_sort[j];
     test_sort[j] = test_sort[j+1];
     test_sort[j+1] = temp;
     }
   }
 }
}
   
 
