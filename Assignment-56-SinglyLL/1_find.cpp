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
};

int main()
{
    int X1,X2;
    X1 = 14;
    X2 = 13;
    SLL s;
    s.input(14);
    s.input(21);
    s.input(11);
    s.input(30);
    s.input(10);

    cout<<s.find(X1);
     
    SLL s1;
    s1.input(6);
    s1.input(21);
    s1.input(17);
    s1.input(30);
    s1.input(10);
    s1.input(8);

    cout<<endl<<s.find(X2);

    return 0;
}