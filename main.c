#include <stdio.h>
#include <stdlib.h>
#include "StackArray.h"

int main() {
	StackArrayList s;
    int elem;

    initStack(&s);
    stack_push(&s, 5);
    stack_push(&s, 10);
    stack_push(&s, 15);
    display(s);
 	 visualize(s);
	
 	stack_pop(&s);
    stack_pop(&s);
    stack_pop(&s);
    
    StackArrayList evenStack = EvenNumbers(&s);
     visualize(evenStack);
     visualize(s);
      
	return 0;
}
