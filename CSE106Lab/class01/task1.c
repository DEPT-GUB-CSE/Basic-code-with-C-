#include<stdio.h>

int st[100],size,top=-1;

void push(int element)
{
    if ( top == size -1 )
    {
        printf("Sorry ! Stack is full.Overflow Occur %d\n",element);
    }
    else
    {
        top = top+1;
        printf("Your push index is %d and element is : %d\n",top,element);
        st[top]=element;
    }
    return push;
}
void pop()
{
    if ( top == -1 ){
        printf("Oops ! Stack is empty.\n");
    }
    else{
    printf("Your popped element is : %d\n",st[top]);
    top= top-1;
    }
}
int main()
{

    int i;

    printf("Enter the Stack size: ");
    scanf("%d", &size);


    printf("\n<<<< Here is your Stack >>>>\n\n");
    printf("Your Stack size is : %d\n",size);

    push(17);
    push(5);
    push(123);
    push(25);
    push(12);
    push(87);

    //pop();
    //pop();
    //pop();



    //peek();

    for (i=top; i>=0; i-=1)
    {
        printf("%d\n",st[i]);
    }




}
