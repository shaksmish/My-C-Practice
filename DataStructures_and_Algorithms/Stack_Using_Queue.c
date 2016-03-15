#include<stdio.h>
#define maxsize 4
int front1=-1,rear1=-1,front2=-1,rear2=-1;
int queue1[maxsize],queue2[maxsize];

void display()
    {
    if(front1==-1&&rear1==-1)
        printf("\nStack is empty.");
    else
        {
        printf("\nElements in Stack in reversed order are \n");
        int i;
        for(i=front1;i<=rear1;i++)
            {
            printf("%d ",queue1[i]);
            }
        }
    }

void enqueue(int *Q,int ele,int *f, int *r)
    {
    if(*r>=maxsize-1)
        {
        printf("\nQueue is full. Value can't be added.");
        return;
        }
    if(*f==-1)
        {
        (*f)++;
        }
    (*r)++;
    *(Q+*r)=ele;
    }
int dequeue(int *Q,int *f, int *r)
    {
    int ele;
    if(*f==*r)
        {
        ele=*(Q+*f);
        *f=-1;
        *r=-1;
        }
    else
        {
        ele=*(Q+*f);
        (*f)++;
        }
    return(ele);
    }


void main()
{
int choice,ele,temp;
    printf("\n\t[1] Push");
    printf("\n\t[2] Pop");
    printf("\n\t[3] Display");
    printf("\n\t[7] Exit");

do
    {
    printf("\nEnter your choice= ");
    scanf("%d",&choice);

    switch(choice)
        {
        case 1:
        if(rear1>=maxsize-1)
            {
            printf("\nStack is full. Value can't be added.");
            break;
            }

        printf("\nEntere the element to insert= ");
        scanf("%d",&ele);
        if(front1==-1)    /*for 1st element of stack*/
            {
            front1=rear1=0;
            queue1[rear1]=ele;
            break;
            }
        else
            {
            enqueue(queue2,ele,&front2,&rear2);
            /*transfer elements of queueu1 to queue2*/
            while((front1<=rear1)&&(front1!=-1))
                {
                temp=dequeue(queue1,&front1,&rear1);
                enqueue(queue2,temp,&front2,&rear2);
                }
            /*transfer elements of queueu2 to queue1*/
            while((front2<=rear2)&&(front2!=-1))
                {
                temp=dequeue(queue2,&front2,&rear2);
                enqueue(queue1,temp,&front1,&rear1);
                }
            }
            break;
        case 2: if(front1==-1&&rear1==-1)
                printf("\nStack is empty. Value can't be deleted.");
            else
                {
                ele=dequeue(queue1,&front1,&rear1);
                printf("\nDeleted Element from stack= %d",ele);
                }
            break;
        case 3: display();
        }
    }while(choice!=7);
}