#include <stdio.h>
#include "Institution.h"
#include "CException.h"
#include "LinkedList.h"
#include "Stack.h"

Stack stack;
LinkedList list;

// void List_addTail(LinkedList *list,void *element);
// void *List_removeHead(LinkedList *list);
// void Stack_push(Stack *stack, void *element);
// void *Stack_pop(Stack *stack);

int Institution_reverse(LinkedList *inputList, LinkedList *outputList){
	void *temp;
	int stackCount;
	
	if(inputList->head = NULL){return 0;}
	
	temp = List_removeHead(inputList);
	stackCount = 0;
	do{
	Stack_push(&stack, temp);
	temp = List_removeHead(inputList);
	stackCount++;
	}
	while( temp!=NULL );
	
	do{
	stackCount--;
	temp = Stack_pop(&stack);
	List_addTail(outputList, temp);
	}
	while(stackCount!=0);

	return stackCount;
}
int isUniversityCollege(void *elem1, void *type){
	
}

int Institution_select(LinkedList *inputList, LinkedList *outputList,void *criterion, int(*compare)(void* , void*)){
	
}