//Saugat Tripathi
//@02752994

#include <stdio.h>
#include <stdlib.h>
#include "list.c"


int main() {
	printf("\n  Suagat Tripathi \n");
	printf("\n  @027522994 \n");
	printf("\n-----------------------------------------------------\n");
	printf("\n  Creating List \n \n");
	list* myList = create_list();
	printf("\n-----------------------------------------------------\n");
	printf("\nTesting add_to_list List \n \n");
	printf("\n modeAdding to Empty List \n \n");
	add_to_list(myList, "Saugat");
	printf("\n Adding Saugat \n");
	add_to_list(myList, "Tripathi");
printf("\n Adding Tripathi \n");
	printf("\n Adding Empty String \n");
	add_to_list(myList, "");
	add_to_list(myList, "Computer Science");
	printf("\n Adding Computer Science \n");
	printf("\n-----------------------------------------------------\n");
	printf("\n Testing print_list \n \n");
	print_list(myList);
	printf("\n-----------------------------------------------------\n");
	printf("\n Testing remove_from_list List (Should the last element of the list  \n \n");
	printf("\n The item removed is %s \n", remove_from_list(myList));	
	printf("\n Printing List \n \n");
	print_list(myList);

	printf("\n-----------------------------------------------------\n");
	printf("\n Testing flush_List \n");
	flush_list(myList);
	printf("\n Printing List (Should Print Nothing after flushing) \n \n");
	print_list(myList);
	printf("\nTesting free_list List \n");
	printf("\nAdding first item to list \n");
	add_to_list(myList, "First Item");
	printf("\n Adding Second Item \n");
	add_to_list(myList, "Second Item");
	printf("\nAdding Third Item \n \n");
	add_to_list(myList, "Third Item");
	print_list(myList);
	printf("\n Since I was able to add items to the list, the pointer is correct.\n");
	printf("\n-----------------------------------------------------\n");
	printf("\n Testing  free_list \n");
	free_list(myList);
	printf("\n Adding item to the list will now result in error since linkedlist is freed. \n");
	printf("\n-----------------------------------------------------\n");

	return 0;






}