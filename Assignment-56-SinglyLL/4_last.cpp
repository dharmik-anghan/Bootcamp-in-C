#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node *next;

        node()
        {
            data = 0;
            next = NULL;
        }
};

class SLL
{
    private:
        node *head;
    public:
        SLL()
        {
            head = NULL;
        }

        void input(int v)
        {
            node *temp = new node();
            temp->data = v;
            if(head == NULL)
            {
                head = temp;
            }
            else
            {
                node *t = head;
                while(t->next != NULL)
                {
                    t = t->next;
                }
                t->next = temp;
            }
        }
        void lastNodeFront()
        {
            node *temp = head;

            if(head == NULL)
            {
                cout<<"No List Available!!!";
            }
            else
            {
                while(temp->next->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next->next = head;
                head = temp->next;
                temp->next = NULL;
            }
        }

        void print()
        {
            node *temp = head;

            if(head == NULL)
            {
                cout<<"No List Available!!!";
            }
            else
            {
                while(temp != NULL)
                {
                    cout<<temp->data<<" -> ";
                    if(temp->next == NULL)
                        cout<<"NULL";
                    temp = temp->next;
                }
            }
        }

};

int main()
{
    SLL s1,s2;
    s1.input(1);
    s1.input(2);
    s1.input(3);
    s1.input(4);
    s1.input(5);

    s1.lastNodeFront();
    s1.print();
    cout<<endl;


    s2.input(3);
    s2.input(8);
    s2.input(1);
    s2.input(5);
    s2.input(7);
    s2.input(12);

    s2.lastNodeFront();
    s2.print();

    return 0;
}