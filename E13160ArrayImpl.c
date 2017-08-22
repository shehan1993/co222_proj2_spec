#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "StackAndQueue.h"

#define NO_OF_ELEMENTS 100000

//int StackPush(Stack* stack, int value);

//create structure for stack

typedef struct stack{
	int value[NO_OF_ELEMENTS];
	int num;
	
	}Stack;
	 
//create structure for queue
typedef struct queue{
	int valueque[NO_OF_ELEMENTS];//store value
	int numque; // store count

	}Queue;

//create stack
Stack* CreateStack(){
	//get space
	Stack *newstack = (Stack*)malloc(sizeof(Stack));
	
	newstack->num=0;
	
	return newstack;
	
	}

//entering new element
int StackPush(Stack* stack, int value){
	//num count should less than NO_OF_ELEMENTS
	if(stack -> num == NO_OF_ELEMENTS-1 ){
		return -1;
		exit(1);
		
		}
		
	else{
		 stack->value[stack->num] = value;
		 stack -> num++;
		 
		return 0;	
			}
			
	}

//removing elements from stack
int StackPop(Stack* stack, int* value){
	
	stack->value[stack->num]=stack -> value[stack->num+1] ;
	stack->num=stack->num-1;
	return 0;
	
	}

//view the recently added element
int StackPeek(const Stack* stack, int* value){
	 
	 *value = stack->value[stack->num];
	 return 0;
	     
	}
	
	//deleting full stack
int DeleteStack(Stack* stack){
	
	free(stack);
	return 0;
	
	}
 //create queue
Queue* CreateQueue(){
	Queue *newqueue = (Queue*)malloc(sizeof(Queue));
	newqueue->numque=0;
	
	return newqueue;
	
	}
	
	
	//entering new element

int QueueEnqueue(Queue* queue, int value){
	
	//numque mean count
	//numque should less than NO_OF_ELEMENTS
	if(queue -> numque == NO_OF_ELEMENTS-1 ){
		return -1;
		exit(1);
		
		}
		
	else{
		 queue->valueque[queue->numque] = value;
		 queue -> numque++;
		 
		return 0;	
			}
	
	}
	
	
//removing first element 
int QueueDequeue(Queue* queue, int* value){
	int i=0;
	int numque; 
	for(numque= queue->numque;numque>=0;numque--){
		
		queue->valueque[i]=queue->valueque[i+1];
		i++;

		}
	
	
	// queue->valueque[queue->numque-2]== queue->valueque[queue->numque+1];
	 queue ->numque = queue->numque-1;
	return 0;
	
	}
	
	
//view first element added
int QueuePeek(const Queue* queue, int* value){
	
	*value = queue->valueque[0];
	
	return 0;
	
	}
	
	//deleting queue
int DeleteQueue(Queue* queue){
	
	free(queue);
	
	return 0;
	
	}
	
	
	
	
