#include <stdio.h>
#include "stackQueue.h"
#include "liststructures.h"
#include "main_tree.h"
//#include "graph.h"

int main() {
	int ch;
	while(1)
	{
		printf(
				"1. Stack and Queues \n"
				"2. List Structures \n"
				"3. Binary Search Tree \n"
				"4. Graphs \n"
				"99. EXIT\n"
				"Enter your Choice: \n"
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
				//graph();
				break;

			case 99:
				return 0;
		}
	}
}