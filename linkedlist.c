//6210451713 Suppachai Glubpean
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void sort1(struct node *a,struct node *b)
{
    int tmp = a->data;
    a->data = b->data;
    b->data = tmp;
}
void sort2(struct node *first)
{
    int count = 1;
    struct node *cur,*pre = NULL;
    while(count)
    {
        count = 0;
        cur = first;
        while (cur->next != pre)
        {
            if (cur->data > cur->next->data)
            {
                sort1(cur,cur->next);
                count = 1;
            }
            cur = cur->next; 
        }
        pre = cur;
    }
}
int main()
{
    int input;
    struct node *head = NULL,*second = NULL,*tmp;
    while(scanf("%d",&input) == 1)
    {
        if (input == -1)
        {
            break;
        }
        else if (input >= 0)
        {
        if (head == NULL)
        {
            head = second = (struct node *)malloc(sizeof(struct node));
        }
        else
        {
            second->next = (struct node *)malloc(sizeof(struct node));
            second = second->next;
        }
        second->data = input;
        second->next = NULL;
        sort2(head);
        }
    }
    for(tmp=head;tmp;tmp = tmp->next)
    {
        printf("%d\n",tmp->data);
    }
}