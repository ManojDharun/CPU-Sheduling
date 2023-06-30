#include"cpuHdr.h"

Node::Node()
{

}



void Queue::SJF(Queue* q)
{
        Queue *ready;
        ready = new Queue();
        sort_q(q);
        int comp = 0;
        int ct,i;
        ct = (q -> front -> at) + 1;
        Node* temp = q -> front;
        for(i=0;i<100;i++)
        {
                while(ct >= temp -> at and temp != NULL)
                {

                }
        }
}

void Queue::sort_q(Queue *q)
{
        Node *newnode1 = new Node();
        Node* t;
        Node* t1;
        t = q -> front;
        while(t != NULL)
        {
                t1 = t -> next;
                while(t1 != NULL)
                {
                        if(t -> at > t1 -> at)
                        {
                                newnode1 -> pid = t -> pid;
                                newnode1 -> at = t -> at;
                                newnode1 -> bt = t -> bt;
                                newnode1 -> pr = t -> pr;
                                t -> pid = t1 -> pid;
                                t -> at = t1 -> at;
                                t -> bt = t1 -> bt;
                                t -> pr = t1 -> pr;
                                t1 -> pid = newnode1 -> pid;
                                t1 -> at = newnode1 -> at;
                                t1 -> bt = newnode1 -> bt;
                                t1 -> pr = newnode1 -> pr;
                                t1 = t1 -> next;
                        }
                }
                t = t -> next;
        }
}
