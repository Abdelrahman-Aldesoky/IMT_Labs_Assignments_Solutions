#include "STD_TYPES.h"
#include "Linked_List.h"
#include <stdio.h>

/*might have memory leaks needs  a lot of testing
not a single user error case was handled
not a good code in general just completing the assignment and understanding the concept*/

int main(void)
{

	s32 Local_UserInput = 0;
	s32 Local_Data = 0;
	u32 Local_NodeIndex = 0;
	u8 Local_ExitFlag = 0;

	while (Local_ExitFlag == 0)
	{
		printf("To add node at start of list enter 1\n");
		printf("To add node at end of list enter 2\n");
		printf("To Add node after certain node press 3\n");
		printf("To delete node from start press 4\n");
		printf("To delete node from end press 5\n");
		printf("To delete particular node by data press 6\n");
		printf("To print the linked list enter 7\n");
		printf("To exit press to -1\n");
		printf("Your Choice: ");
		scanf("%d", &Local_UserInput);

		switch (Local_UserInput)
		{
		case 1:
			printf("Please Enter Node Data: ");
			scanf("%d", &Local_Data);
			InsertAtStart(Local_Data);
			printf("Node Added to the start of list Thank You \n");
			break;
		case 2:
			printf("Please Enter Node Data: ");
			scanf("%d", &Local_Data);
			InsertAtEnd(Local_Data);
			printf("Node Added to the end of list Thank You \n");
			break;
		case 3:
			printf("Please Enter Node Data: ");
			scanf("%d", &Local_Data);
			printf("Index starts at Zero\n");
			printf("Please Enter node index the node will be Inserted before that index: ");
			scanf("%d", &Local_NodeIndex);
			InsertBeforeNode(Local_NodeIndex, Local_Data);
			printf("Node Added at index %d of list Thank You \n", Local_NodeIndex);
			break;
		case 4:
			DeleteAtStart();
			printf("Node at start deleted \n");
			break;
		case 5:
			DeleteAtEnd();
			printf("Node at end deleted \n");
			break;
		case 6:
			printf("Please Enter the data for the node u want to delete: ");
			scanf("%d", &Local_Data);
			DeleteNode(Local_Data);
			printf("Node deleted \n");
			break;
		case 7:
			PrintLinkedList();
			break;
		case -1:
			printf("Thank You\nGood Bye");
			Local_ExitFlag = 1;
			break;
		default:
			printf("Invalid Choice please try again\n");
			break;
		}
	}
	return 0;
}
