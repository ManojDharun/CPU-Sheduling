#include<iostream>
using namespace std;
class Node
{
        public:
                Node();
                int at,bt,pid,pr;
                int ct,tat,wt,st,lt;
                Node* next;
};

class Queue
{
        public:
                void getdetails();
                void display();
                void fcfs();
                void roundrobin();
                void setattributes(int,int,int);
                void sort_q(Queue*);
                void SJF(Queue*);
                void srtf();
                void priority();
                Node* front;
                Node* rear;

};
