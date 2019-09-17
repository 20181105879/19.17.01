#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}
List Insert( List L, ElementType X )
{
    List head,p,newhead;
    ElementType x=X;
    newhead=head=L;
    while(head)
    {
        if(head->Next->Data>=x)
        {
            p=(struct Node *)malloc(sizeof(struct Node));
            p->Data=x;
            p->Next=head->Next;
            head->Next=p;
            return newhead;
        }
        head=head->Next;
        
        
    }
    
    
    
    return newhead;
}
