//Saugat Tripathi
//@02752994

#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// This is the part of the code for the node definition


node* create_node(char* item) {
    node* newNode = (node*) malloc(sizeof(node));
    assert(newNode != NULL);
    char* newVal =(char*) malloc(sizeof(strlen(item)+1));
    newVal = strdup(item);
    newNode->val = newVal;
    newNode->next = NULL;

    return newNode;
}

void destroy_node(node *curr) {
    assert(curr != NULL);
    free(curr);
}


// This is the part of the code for the list operations


list* create_list() {
    list* ll = (list*)malloc(sizeof(list));
    ll->head = NULL ;
    return ll;
}


void free_list(list* ll) {
    assert(ll != NULL);

    node* curr = ll->head;
    node* next;
    while (curr != NULL) {
        next = curr->next;
        destroy_node(curr);
        curr = next;
    }

    free(ll);
}


//make changes to the function
int add_to_list(list* ll, char* item) {
    assert(ll != NULL);

    if (ll->head == NULL) {
        ll->head = create_node(item);
        return 0;
    }

    node* curr = ll->head;

    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = create_node(item);
   
    return 0;

}

char* remove_from_list(list* ll) {
    assert(ll != NULL);
    node* prev = ll->head;
	node* curr = ll->head->next;
	while (curr->next != NULL) {
	curr = curr->next;
    prev = prev-> next;
	}

	char* returnVal = curr->val;
	prev->next = NULL;
	destroy_node(curr);
	return returnVal;
}

void flush_list(list* ll) {
    assert(ll != NULL);

    node* curr = ll->head;
    node* next;
    while (curr != NULL) {
        next = curr->next;
        free(curr->val);
        free(curr);
        curr = next;
    }
    ll->head = NULL;
}




void print_list(list* ll){
    assert(ll != NULL);

    node* curr = ll->head;
    while (curr != NULL) {
        printf("%s \n", curr->val);
        curr = curr->next;
        }
}

