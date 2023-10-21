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

        void pairWiseSwap()
        {
            node *temp = head;

            if(head == NULL)
            {
                cout<<"No List Available!!!";
            }
            else
            {
                int i;
                while(temp != NULL && temp->next != NULL)
                { 
                    int i = temp->data;
                    temp->data = temp->next->data;
                    temp->next->data = i;
                    temp = temp->next->next;
                }
            }
        }

};

int main()
{
    SLL s1,s2,s3;
    s1.input(1);
    s1.input(2);
    s1.input(3);
    s1.input(4);
    s1.input(5);
    s1.input(6);

    s1.pairWiseSwap();
    s1.print();

    cout<<endl;

    s2.input(1);
    s2.input(2);
    s2.input(3);
    s2.input(4);
    s2.input(5);

    s2.pairWiseSwap();
    s2.print();

    cout<<endl;

    s3.input(1);
    s3.pairWiseSwap();
    s3.print();

    return 0;
}