#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

typedef struct Node_type node;

struct Node_type
{
    s32 data;
    node *next;
};

void PrintLinkedList(void);
void InsertAtStart(s32 Copy_Data);
void InsertAtEnd(s32 Copy_data);
void InsertBeforeNode(u32 Copy_NodeIndex, s32 Copy_data);
void DeleteAtStart(void);
void DeleteAtEnd(void);
void DeleteNode(s32 Copy_Data);

#endif
