
#include<stdio.h>

int st[100],size,top=-1;

void push(char element)
{
    if ( top == size -1 )
    {
        printf("Sorry ! Stack is full.Overflow Occur %c\n",element);
    }
    else
    {
        top = top+1;
        printf("Your push index is %d and element is : %c\n",top,element);
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
    printf("Your popped element is : %c\n",st[top]);
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

    push('a');
    push('b');
    push('!');
    push('#');
    push('$');
    push('e');

    pop();
    pop();
    //pop();



    //peek();

    for (i=top; i>=0; i-=1)
    {
        printf("%c\n",st[i]);
    }




}
