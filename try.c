#include<stdio.h>
#include<stdlib.h>

struct list
{
    char data;
    struct list* next;
};

typedef struct list LIST;
typedef LIST* LINK;

LINK create_ll(char* a)
{
    int i = 1;
    LINK head = NULL, tail;

    if(a[0] != '\0')
    {
        head = (LINK)malloc(sizeof(LIST));
        head -> data = a[0];
        tail = head; 
        while(a[i] != '\0')
        {
            tail -> next = (LINK)malloc(sizeof(LIST));
            tail = tail -> next;
            tail -> data = a[i];
            i++;
        }
        tail -> next = NULL;
    }
    return head;
}

LINK insert_head(LINK head, char a)
{
    LINK new = (LINK)malloc(sizeof(LIST));//dynamically allocating memory to new node
    new -> next = head;//making new node point to head
    new -> data = a;//allocating data to new node
    head = new;//updating head value
    return head;
}

LINK insert_tail(LINK tail, char a)
{
    LINK new = (LINK)malloc(sizeof(LIST));//dynamically allocating memory to new node
    new -> next = NULL;
    tail -> next = new;
    new -> data = a;//allocating data to new node
    tail = new;//updating tail value
    return tail;
}

LINK insert_mid(LINK head, int pos, char a)
{
    LINK new = (LINK)malloc(sizeof(LIST));
    int i = 0;
    LINK t = head;
    LINK temp;
    while(t -> next != NULL)
    {
        if(i == pos - 1)
        {
            temp = t -> next;
            t -> next = new;
            new -> next = temp;
            new -> data = a;
            return head;
        }

        t = t -> next;
        i++;
    }

    printf("Index out of bound");
    return head;
}

LINK pop_head(LINK head)
{
    head = head -> next;
}

void print_list (LINK head)
{
    LINK temp;
    temp = head;
    while(temp!=NULL)
    {
        if(temp->next ==NULL) 
        {
            printf("%c. END OF LIST \n", temp->data); // for the last element
        }
        else 
        {
            printf("%c -> ", temp->data); // for other elements
        }
        temp = temp->next;
    }
}

int main()
{
    LINK k = create_ll("AgnijBiswas");
    k = insert_head(k,'S');
    k = insert_mid(k, 6, ' ');
    print_list(k);
    return 0;
}