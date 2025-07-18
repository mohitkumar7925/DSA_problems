#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "Destructor called " << this->data << endl;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtHead(Node* &head, int d)
{
    Node *node = new Node(d);
    node->next = head;
    head = node;
};

void insertAtPosition(Node* &head, int d, int position)
{
    if (position == 1)  
    {

        Node *node = new Node(d);
        node->next = head;
        head = node;
    }
    else
    {
        Node *curr = head;
        int cnt = 1;
        while (cnt < position - 1)
        {
            if (curr->next != NULL)
            {
                curr = curr->next;
                cnt++;
            }
            else
            {
                cout << "Array index out of bound" << endl;
                break;
            }
        }
        if (cnt == position - 1 )
        {
            Node *newNode = new Node(d);
            newNode->next = curr->next;
            curr->next = newNode;
        }
    }
};

void deleteAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
};
void deleteAtPosition(Node* &head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            if (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            else
            {
                cout << "Array index out of bound" << endl;
                break;
            }
        }
        if (cnt == position)
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node = new Node(10);

    insertAtHead(node, 5);
    insertAtHead(node, 8);
    insertAtHead(node, 1);
    insertAtHead(node, 4);

    print(node);

    insertAtPosition(node, 12 , 3);

    print(node);

    cout << endl;
    return 0;
}