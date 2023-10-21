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

        string find(int key)
        {
            node *temp = head;

            if(head == NULL)
                return "NO";
            else{
                while(temp != NULL)
                {
                    if(temp->data == key)
                        return "Yes";
                    temp = temp->next;
                }
            }
            return "NO";
        }

        void removeDuplicate()
        {
            node *temp = head;

            if (head == NULL)
            {
                cout << "No List Available!!!\n";
            }
            else
            {
                while (temp != NULL && temp->next != NULL)
                {
                    if (temp->data == temp->next->data)
                    {
                        node *deleteD = temp->next;
                        temp->next = temp->next->next;
                        delete deleteD;
                    }
                    else
                    {
                        temp = temp->next;
                    }
                }
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
                    temp = temp->next;
                }
            }
        }
};

int main()
{
    SLL s;
    s.input(11);
    s.input(11);
    s.input(11);
    s.input(21);
    s.input(43);
    s.input(43);
    s.input(60);

    s.removeDuplicate();

    s.print();


    return 0;
}