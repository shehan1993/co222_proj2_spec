#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "StackAndQueue.h"

#define NO_OF_ELEMENTS 100000


//crating structures
typedef struct stack{
	
	int value;
	struct stack* next;
	
	
	}Stack;
	

typedef struct queue{
	int valueque;
	struct queue* nextque;
	
	}Queue;

//create new Stack and Queue for store newly added values

Stack * current;
Queue * currentque;

//get count for limit the link list go longer
int count=0;
int countstack=0;

//creating new stack 
Stack* CreateStack(){
	
	
	Stack* newstack=NULL;//= (Stack*)malloc(sizeof(Stack));
	
	return newstack ;
	
	}
	

// add elements to stack 	
int StackPush(Stack* stack, int value){
	
	//checking the count
	if(countstack<NO_OF_ELEMENTS){
	stack = (Stack*)malloc(sizeof(Stack));
	stack->value = value;
	stack->next = current;
 	current=stack;
	countstack++;
	
	return 0;
	
	}else{return -1;}
	
}

//romoving last element
int StackPop(Stack* stack, int* value){
	//free(current);
	free(stack);
	countstack--;
	current =stack;
	return 0;
	
	}
	
	//showing the last element
int StackPeek(const Stack* stack, int* value){

	*value = current->value;
	
	
	return 0;
	}

//delete the full stack
int DeleteStack(Stack* stack){
	int n;
	for(n=0;n<countstack;n++){
	free(stack);
	
	}
	free(current);
	return 0;
	
	}	



//creating queue

Queue* CreateQueue(){
	Queue* newqueue= NULL;
	
	return newqueue;
	
	}
		
//add new elements to queue
int QueueEnqueue(Queue* queue, int value){
	//checking the count, for limit the adding elements 
	count++;
	if(count<NO_OF_ELEMENTS){
	
	queue = (Queue*)malloc(sizeof(Queue));
	queue->valueque = value;
	queue -> nextque = currentque;
    currentque=queue;
		 
	return 0;}
	
	else{return -1;}
	
	
	
	
	

	}
	
	//removing the first element 
	
int QueueDequeue(Queue* queue, int* value){
	
	for(queue=currentque;queue!=NULL;queue=queue->nextque){
		
		}
	
	free(queue);
	
	return 0;
	}

//showing the first element in the queue

int QueuePeek(const Queue* queue, int* value){
	
	for(queue=currentque;queue!=NULL;queue=queue->nextque){
		
		
		}
		*value = queue->valueque;
		
	return 0;
	}

   // delete  full queue
       
int DeleteQueue(Queue* queue){
	
	for(queue=currentque;queue!=NULL;queue=queue->nextque){
		
		free(queue);
		
		}
	return 0;
	}
