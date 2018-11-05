#include <stdio.h>
//#include "arraylist.h"
//#include "liststructures.h"
#include "tree.h"

int main() {
	int ch;
	while(1)
	{
	    printf(
	        "What will you like to test?\n"
	        "1. List Structures\n"
	        "2. Binary Search Tree\n"
			"99. EXIT\n"
			"Enter your Choice :\n"
	    );
		scanf("%d", &ch);
	    switch(ch)
		{
	        case 1:
				//listMenu();
	        break;
	
	        case 2:
				tree_bst();
	        break;
			
			case 99:
				return 0;
	    }
	}
}