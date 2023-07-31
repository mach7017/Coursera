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
 * @file stats.h
 * @brief Header file for all function description
 *
 *
 *
 * @author Martin Chirayath
 * @date 07/30/23
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

int find_minimum(unsigned char test[SIZE],int minimum ,int length); 

/**
 * @brief Find the minimum value from the array 
 * The function compares each value and finds the minimum value   
 *
 * @param test - array that has values
 * @param minimum - minimum value to be found
 * @param length - size of the array
 *
 * @return minimum 

int find_maximum(unsigned char test[SIZE],int maximum, int length);

/**
 * @brief Find the maximum value from the array 
 * The function compares each value and finds the maximum value   
 *
 * @param test - array that has values
 * @param maximum - maximum value to be found
 * @param length - size of the array
 *
 * @return maximum 

int find_mean(unsigned char test[SIZE],float mean, int length);

/**
 * @brief Find the mean value from the array 
 * The function compares each value and finds the mean value   
 *
 * @param test - array that has values
 * @param mean - mean value to be found
 * @param length - size of the array
 *
 * @return mean

int find_median(unsigned char test_arranged[SIZE],float  median, int length);

/**
 * @brief Find the median value from the array 
 * The function compares each value and finds the median value   
 *
 * @param test - array that has values
 * @param median - median value to be found
 * @param length - size of the array
 *
 * @return median

int print_statistics(int minimum, int maximum, float mean, float median);

/**
 * @brief Print minimum, maximum, mean and median values found
 * Print Maximum, minimum, mean and median values  
 *
 * @param minimum - Minimum value from the array
 * @param maximum - Maximum value from the array
 * @param mean - Mean value from the array
 * @param median - Median value from the array
 *
 * @return 0

int print_array(unsigned char test[SIZE]);

/**
 * @brief Print array values provided
 *
 * Print array values provided  

 * @param test - array that has values
 *
 * @return 0

int sort_array(unsigned char test[SIZE]); */

/**
 * @brief Sort the array in descending order
 *
 * Sort the array in descending order
 *
 * @param test - array that has values
 *
 * @return 0
 */


#endif /* __STATS_H__ */
