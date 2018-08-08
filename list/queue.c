/*Queue - Linked List implementation*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node {
	char token[255];
	struct Node* next;
};
// Two glboal variables to store address of front and rear nodes. 
struct Node* front = NULL;
struct Node* rear = NULL;

// To Enqueue an integer
void Enqueue(char* x) {
	struct Node* temp = 
		(struct Node*)malloc(sizeof(struct Node));
	strcpy(temp->token,x);
	temp->next = NULL;
	if(front == NULL && rear == NULL){
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}

// To Dequeue an integer.
void Dequeue(char* to) {
	struct Node* temp = front;
    strcpy(to,front->token);
    if(front == NULL) {
		printf("Queue is Empty\n");
	}
	if(front == rear) {
		front = rear = NULL;
	}
	else {
		front = front->next;
	}
	free(temp);
}

char* Front() {
	if(front == NULL) {
		printf("Queue is empty\n");
		return NULL;
	}
	return front->token;
}

void Print() {
	struct Node* temp = front;
	while(temp != NULL) {
		printf("%s ",temp->token);
		temp = temp->next;
	}
	printf("\n");
}


//int main(){
	/* Drive code to test the implementation. */
	// Printing elements in Queue after each Enqueue or Dequeue
  //  char token[255]; 
	//Enqueue("22"); Print(); 
	//Enqueue("44"); Print();
	//Enqueue("66"); Print();
	//Dequeue(token);  Print();
	//Enqueue("88"); Print();
//}
//