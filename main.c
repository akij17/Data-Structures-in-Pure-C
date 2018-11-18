#include <stdio.h>
#include "liststructures.h"
#include "stackQueue.h"
#include "graph.h"
#include "graph2.h"
#include "main_tree.h"
#include "heap.h"

void heapOptions();
void graphOptions();
int main() {
	int ch;
	while(1)
	{
	    printf(
	        "\nWhat will you like to test?\n"
	        "1. Stack and Queues\n"
	        "2. List Structures\n"
            "3. Binary Search Tree\n"
            "4. Heap\n"
            "5. Graphs\n"
			"99. EXIT\n"
			"Enter your Choice: "
	    );
		scanf("%d", &ch);
	    switch(ch)
		{
	        case 1:
				stackQueue();
	        break;
	
	        case 2:
				listMenu();
	        break;

		    case 3:
		        main_tree();
				break;
		    case 4:
		        heapOptions();
		        break;
			case 5:
				graphOptions();
				break;
			case 99:
				return 0;
	    }
	}
}

void heapOptions(){
    main_heap();
}

void graphOptions()
{
    printf("\n"
           "1. Graphs using lists\n"
           "2. Graphs using matrix\n"
           "99. Back to main menu\n"
    );
	int x; scanf("%d", &x);
    switch(x){
        case 1:
            main_graph1();
            break;
        case 2:
        	main_graph2();
            break;
        case 99:
            return;
        default:
            return;
    }
}