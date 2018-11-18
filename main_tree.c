//
// Created by WoLvErInE on 17-11-2018.
//

#include "avl_bst.h"
#include<stdio.h>
#include<stdlib.h>
#include "helpers.h"

void main_tree()
{
    root_tree = temp_tree = NULL;
    int
            ch,
//	root_tree = insert_bst(root_tree, 80);
//	root_tree = insert_bst(root_tree, 40);
//	root_tree = insert_bst(root_tree, 120);
//	root_tree = insert_bst(root_tree, 20);
//	root_tree = insert_bst(root_tree, 60);
//	root_tree = insert_bst(root_tree, 10);
//								80,
//					40,					 120,
//			20,			60,
//		10,
            Ns1[] = {
            320,
            160, 																						480,
            80, 										240,		 								400,	 										560,
            40, 			120, 					200, 				280, 					360, 					440, 					520,	 			600,
            20, 		60, 	100, 		140, 		180, 		220, 	260, 		300, 		340, 		380, 	420, 		460, 			500, 	540, 		580, 	620,
            10, 	30, 50,	 70, 90,	 110, 130, 	150, 170, 	190, 210,	 230, 	250, 270, 	290, 310, 	330, 350, 370, 390, 410, 430, 450, 470, 490, 510, 530, 550, 570, 590, 610, 630
    },
            Ns2[] = {
            80,
            40,					 120,
            20,			60,			100,		140,
            10,		30, 50, 	70,
            5
    },
            Ns3[] = {
            80,
            40,					 120,
            20,			60,
            10,
    },
            Ns4[] = {
            80,
            40,
            20
    },
            Ns5[] = {
            80,
            120,
            240
    },
            Ns6[] = {
            80,
            20,
            60
    },
            Ns7[] = {
            80,
            120,
            100
    };
    //root_tree = array_insert_bst(root_tree, Ns3, 6);
    while(1)
    {
        printf(
                "1. Insert node \n"
                "2. Display Tree \n"
                "3. Traversal \n"
                "4. Search \n"
                "5. Minimun key \n"
                "6. Maximum key \n"
                "7. Height \n"
                "8. Clear Console \n"
                "99. Main Menu \n"
                "Enter Choice : \n"
        );
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1:
                printf("Enter value to insert : ");
                scanf("%d",&ch);
                root_tree = insert_bst(root_tree, ch);
                if(root_tree == NULL)
                    printf("\nInsertion failed :(");
                else
                    printf("\n%d Inserted Successfully :)", ch);
                break;

            case 2:
                print_bt(root_tree);
                pressEnterKey();
                break;

            case 3:
                printf(
                        "1. Pre Order Traversal \n"
                        "2. In Order Traversal \n"
                        "3. Post Order Traversal \n"
                        "Enter Choice : \n"
                );
                scanf("%d",&ch);
                traversal_tree(root_tree, ch);
                pressEnterKey();
                break;

            case 4:
                printf("Enter Key to search :\n");
                scanf("%d",&ch);
                temp_tree = search_bst(root_tree, ch);
                if(temp_tree == NULL)
                    printf("\n%d Doesn't Exist in Tree :(", ch);
                else
                    printf("\n%d Exists in Tree :)", ch);
                break;

            case 5:
                temp_tree = minimum_key_bst(root_tree);
                if(temp_tree == NULL)
                    printf("Tree is Empty :(");
                else
                    printf("%d is Smallest Key", temp_tree->key);
                break;

            case 6:
                temp_tree = maximum_key_bst(root_tree);
                if(temp_tree == NULL)
                    printf("Tree is Empty :(");
                else
                    printf("%d is Largest Key", temp_tree->key);
                break;

            case 7:
                printf("Tree's height is %d", height_tree(root_tree));
                break;

            case 8:
                system("cls");
                break;

            case 99:
                return;
        }
        printf("\n\n");
    }
}

//void main()
//{
//	main_tree();
//}
