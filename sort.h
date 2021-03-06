#ifndef SORT_H
#define SORT_H

/* Libraries */

#include <stdlib.h>
#include <stdio.h>

/* Linked list struct */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Functions */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
int isSorted(int *array, size_t size, listint_t *head);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_helper(int *array, size_t size, int left, int right);
void quick_sort_hoare(int *array, size_t size);
int partition(int *array, size_t size, int left, int right);
void swap(int *array, int left, int right);
void shell_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge_sort_helper(int *array, int left, int right, int *helper);
void merge_sorted_arrays(int *array, int left, int mid, int right, int *h);
void copy_array(int *array, int start, int end, int *helper);
void counting_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);

#endif
