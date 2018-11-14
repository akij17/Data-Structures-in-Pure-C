#include <stdio.h>
#include "liststructures.h"
#include "tree.h"
#include "stackQueue.h"

int main() {
	int ch;
	while(1)
	{
	    printf(
	        "What will you like to test?\n"
	        "1. List Structures\n"
	        "2. Binary Search Tree\n"
         "3. Stack and Queues\n"
			"99. EXIT\n"
			"Enter your Choice: "
	    );
		scanf("%d", &ch);
	    switch(ch)
		{
	        case 1:
				listMenu();
	        break;
	
	        case 2:
				tree_bst();
	        break;

		    case 3:
		        stackQueue();
			
			case 99:
				return 0;
	    }
	}
}