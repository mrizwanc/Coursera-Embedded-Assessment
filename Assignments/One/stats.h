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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_statistics (unsigned char minimum, unsigned char maximum, float mean, unsigned char median);
/**
 * @brief Prints the statistics of a given array
 *
 * This function takes the resulting statistics done on an array
 * which are: minimum, maximum, mean, and median, and print those
 * values on the screen
 * 
 * @param minimum The minimum number of the given array
 * @param maximum The maximum number of the given array
 * @param mean The mean of the given array
 * @param median The median of the given array
 *
 * @return void
 */


void print_array (unsigned char *array, unsigned int sz);
/**
 * @brief Prints the contents of a given array
 *
 * This function takes the given array and prints it to the
 * screen.
 * 
 * @param array The array will be printed on the screen
 * @param sz is the size of the array
 *
 * @return void
 */


unsigned char find_median (unsigned char *array, unsigned int sz);
/**
 * @brief Finds the median of the given array
 *
 * This function takes the given array and finds
 * it's median.
 * 
 * @param array Passes the array to the function
 * @param sz Passes the size of the array
 *
 * @return median The median value of the given array.
 */


float find_mean (unsigned char *array, unsigned int sz);
/**
 * @brief Finds the mean of the given array
 *
 * This function takes the given array and finds
 * it's mean.
 * 
 * @param array Passes the array to the function
 * @param sz Passes the size of the array
 *
 * @return mean The mean value of the given array.
 */


unsigned char find_maximum (unsigned char *array, unsigned int sz);
/**
 * @brief Finds the maximum of the given array
 *
 * This function takes the given array and finds
 * it's maximum.
 * 
 * @param array Passes the array to the function
 * @param sz Passes the size of the array
 *
 * @return maximum The maximum value of the given array.
 */


unsigned char find_minimum (unsigned char *array, unsigned int sz);
/**
 * @brief Finds the minimum of the given array
 *
 * This function takes the given array and finds
 * it's minimum.
 * 
 * @param array Passes the array to the function
 * @param sz Passes the size of the array
 *
 * @return minimum The minimum value of the given array.
 */


void sort_array (unsigned char *array, unsigned int sz);
/**
 * @brief Sorts the given array from the largest to smallest
 *
 * This function takes the given array and its length, sorts
 * the array from the largest to smallest.
 * 
 * @param array Passes the array to the function
 * @param sz Passes the size of the array
 *
 * @return void.
 */




#endif /* __STATS_H__ */
