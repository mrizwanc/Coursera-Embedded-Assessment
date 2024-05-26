/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification, or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <The Implementation File Of The c1m1 Assessment>
 *
 * <This file includes all the required functions implementations in the c1m1 assessment>
 *
 * @author <Md. Rizwan Chowdhury>
 * @date <18/05/2024>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  
  unsigned char minimum = 0;
  unsigned char maximum = 0;
  float mean = 0;
  unsigned char median = 0;
  
  /* Statistics and Printing Functions Go Here */

  printf("Array Unsorted: \n");
  print_array(&test, SIZE);
  median = find_median(&test, SIZE);
  mean = find_mean(&test, SIZE);
  maximum = find_maximum(&test, SIZE);
  minimum = find_minimum(&test, SIZE);
  print_statistics(minimum, maximum, mean, median);
  sort_array(&test, SIZE);
  printf("Array Sorted: \n");
  print_array(&test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char minimum, unsigned char maximum, float mean, unsigned char median)
{
  printf("Minimum: %d \n", minimum);
  printf("Maximum: %d \n", maximum);
  printf("Mean: %f \n", mean);
  printf("Median: %d \n", median);
}


void print_array(unsigned char *array, unsigned int sz)
{
  for (int i=0; i<sz; i++)
  {
    printf("%d, ", array[i]);
  }
  printf("\n");
}


unsigned char find_median(unsigned char *array, unsigned int sz)
{
  unsigned char median = 0;
  median = *(array + (sz / 2) -1);
  return median;
}


float find_mean (unsigned char *array, unsigned int sz)
{
  unsigned int accumulator = 0; //storing accumulator value in the mean finding process
  float mean = 0;
  for (int i=0; i<sz; i++)
  {
    accumulator += array[i];
  }
  printf("acc = %d \n", accumulator);
  mean = accumulator / ((float) counter); //typecasting for accurate calculation.
  return mean;
}

unsigned char find_maximum (unsigned char *array, unsigned int sz)
{
  unsigned char max = array[0];
  for (int i=1; i<sz; i++)
  {
    if ( array[i] > max)
    {
      max = array[i];
    }
  }
  return max;
}

unsigned char find_minimum (unsigned char *array, unsigned int sz)
{
  unsigned char min = array[0];
  for (int i=1; i<sz; i++)
  {
    if ( array[i] < min )
    {
      min = array[i];
    }
  }
  return min;
}

void sort_array (unsigned char *a, unsigned int sz)
{
  int i,j;
  for (i = 0; i < sz; i++) 
  {
    for (j = i + 1; j < sz; j++)
    {
      if (a[i] < a[j])
      {
        t = a[i]; 
        a[i] = a[j]; 
        a[j] = t; 
      } 
    } 
 }

}
