#include "STD_TYPES.h"
#include "Linked_List.h"
#include <stdio.h>
#include <stdlib.h>

node *Global_Head = NULL;

void PrintLinkedList(void)
{
   /*Creating New Temp Node Pointer and making it hold address of my head (1st node) so i can Iterate on and free*/
   node *Local_pTempNode = Global_Head;
   /*print list*/
   printf("\n[");
   /*start printing from the 1st node till u reach last node which contains NULL*/
   while (Local_pTempNode != NULL)
   {
      printf(" %d ", Local_pTempNode->data);
      /*making my temp node address the address of the next node*/
      Local_pTempNode = Local_pTempNode->next;
   }
   printf("]\n");
   printf("\n");
}

void InsertAtStart(s32 Copy_Data)
{
   /*create a new node and allocating memory for it*/
   node *NewNodeStart = (node *)malloc(sizeof(node));

   /*taking the data provided by the user and assigning it to my new node*/
   NewNodeStart->data = Copy_Data;

   /*Assigning my New node->Next the address of the current 1st node Address
   so my current 1st node (head) will become my 2nd node in the list*/
   NewNodeStart->next = Global_Head;

   /*changing my Global_head pointer to point to my newly created node making it 1st node in my list*/
   Global_Head = NewNodeStart;
}

void InsertAtEnd(s32 Copy_data)
{
   /*create a new node and allocating memory for it*/
   node *NewNodeEnd = (node *)malloc(sizeof(node));

   /*taking the data provided by the user and assigning it to my new node*/
   NewNodeEnd->data = Copy_data;

   /*if no nodes exist in my list*/
   if (Global_Head == NULL)
   {
      /*make my newly created node the 1st node in my list*/
      NewNodeEnd->next = Global_Head;
      Global_Head = NewNodeEnd;
      return;
   }

   /*Assigning my New Node->Next to NULL Making it ready to be my last node in my list*/
   NewNodeEnd->next = NULL;
   /*Creating New Node Pointer and making it the address of my head (1st node) so i can Iterate on my list*/
   node *NodeBeforeLast = Global_Head;

   /*Iterate on my List until reaching the last node in my list*/
   while (NodeBeforeLast->next != NULL)
      NodeBeforeLast = NodeBeforeLast->next;

   /*Make my Newly end node the last node on my list*/
   NodeBeforeLast->next = NewNodeEnd;
}

void InsertBeforeNode(u32 Copy_NodeIndex, s32 Copy_data)
{
   /*create a new node and allocating memory for it*/
   node *NewNodeAtIndex = (node *)malloc(sizeof(node));

   /*taking the data provided by the user and assigning it to my new node*/
   NewNodeAtIndex->data = Copy_data;

   /*Creating New node pointer and making it the address of my head 1st node so i can Iterate till i reach node at the index user provided*/
   node *NodeAtIndex = Global_Head;

   /*Node index counter to count until the index provided by user*/
   u32 NodeIndexCounter = 0;

   /*Iterate until i reach node before the index provided by the user*/
   while (NodeAtIndex->next != NULL)
   {
      /*if i reach the node before the node provided by the user*/
      if (NodeIndexCounter == Copy_NodeIndex - 1)
      {
         /*Assign my new created node next to be the current node i stopped at it next*/
         NewNodeAtIndex->next = NodeAtIndex->next;
         /*Then make the current node index point to my newly created node effectively putting the new node before the user provided node*/
         NodeAtIndex->next = NewNodeAtIndex;
         break;
      }
      else
      {
         /*increase counter*/
         NodeIndexCounter++;
         /*iterate to the next node*/
         NodeAtIndex = NodeAtIndex->next;
      }
   }
}

void DeleteAtStart(void)
{
   /*just creating temp pointer to hold address of my current 1st node to free the memory*/
   node *Local_pTempNode = Global_Head;
   /*Assign the address of the 2nd node on my list the Current Head Making it 1st node on my list*/
   Global_Head = Global_Head->next;
   /*free the memory*/
   free(Local_pTempNode);
   Local_pTempNode = NULL;
}

void DeleteAtEnd(void)
{
   /*create a new node and allocating memory for it*/
   node *NewNodeEnd = (node *)malloc(sizeof(node));

   /*start from the start of the list*/
   NewNodeEnd = Global_Head;

   /*Iterate until reaching the node before Last in my list*/
   while (NewNodeEnd->next->next != NULL)
      NewNodeEnd = NewNodeEnd->next;

   /*just creating temp pointer to hold address of my current last node to free the memory*/
   node *Local_pTempNode = NewNodeEnd->next;

   /*Make the node before last next point to null making it effectively the last node on my list*/
   NewNodeEnd->next = NULL;

   /*free the memory*/
   free(Local_pTempNode);
   Local_pTempNode = NULL;
}

void DeleteNode(s32 Copy_Data)
{ // create two new nodes temporary nodes which points to the current head node start node and new previous node pointer
   node *Local_pTempNode = Global_Head, *Local_PreviousNode;

   if (Local_pTempNode != NULL && Local_pTempNode->data == Copy_Data) // check if want to delete the first node in the list
   {
      Global_Head = Local_pTempNode->next;
      return;
   }

   // Iterate till u find the data
   while (Local_pTempNode != NULL && Local_pTempNode->data != Copy_Data)
   {
      Local_PreviousNode = Local_pTempNode;
      Local_pTempNode = Local_pTempNode->next;
   }

   // if node is not found exit
   if (Local_pTempNode == NULL)
      return;

   // Remove the node
   Local_PreviousNode->next = Local_pTempNode->next;
   /*free the memory*/
   free(Local_pTempNode);
   Local_pTempNode = NULL;
}