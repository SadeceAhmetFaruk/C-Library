#include <stdio.h>

#include <stdlib.h>


/*
First Delete + 
First Ýnsert +
LAst Delete 
Last Ýnsert 
Update 
Find +
Count
*/

struct node {
  int data;
  int key;
  struct node * next = NULL;
};
struct node * first_node = NULL;
struct node * second_node = NULL;

void countList(){
	struct node * current = first_node;
	int i = 0 ;
	if(first_node == NULL){
		printf("your List is Empty");
	}
	while(current != NULL  ){
		i++;
		current = current ->next;
	}
	printf("Listeniz %d uzunluða sahiptir",i);
	
	
}
struct node * findTheKey(int key) {

  // Start the first
  struct node * current = first_node;

  // List Check 
  if (first_node == NULL) {
    printf("List is Empty");
    return NULL;
  }
  while (current -> key =! key) {
    if (current -> key == NULL) {
      return NULL;
    } else {
      current = current -> next;

    }

  }
  return current;

}

void insertFirst(int key, int data) {
  struct node * link = (struct node * ) malloc(sizeof(struct node));
  link -> key = key;
  link -> data = data;
  link -> next = first_node;
  first_node = link;
}

struct node * deleteFirst() {
  struct node * temp = first_node;
  first_node = first_node -> next;

  return temp;

}

int main() {

  return 0;

}
