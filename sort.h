#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>

/**
 * print_array - prints an array
 * @array: array to print
 * @size: size of array
 */
void print_array(const int *array, size_t size);

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
#endif
