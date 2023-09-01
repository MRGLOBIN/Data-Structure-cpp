#include <iostream>

using namespace std;

class Node
{
public:
    // class attributes
    int value;
    Node *next;

    // class constructor
    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

class Link_list
{
private:
    // head to point start of list and tail to point end of list
    Node *head, *tail;
    int length;

public:
    Link_list(int value)
    {
        Node *newNode = new Node(value);
        head = tail = newNode;
        length = 1;
    }

    // destructor to destory all created memory dynamically
    ~Link_list()
    {
        Node *temp = head;
        while (head)
        {
            head = head->next;
            delete temp;
            temp = head;
        }
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void getHead()
    {
        if (head == nullptr)
        {
            cout << "Head: nullptr" << endl;
        }
        else
        {
            cout << "Head: " << head->value << endl;
        }
    }

    void getTail()
    {
        if (tail == nullptr)
        {
            cout << "Tail: nullptr" << endl;
        }
        else
        {
            cout << "Tail: " << tail->value << endl;
        }
    }

    void getLength()
    {
        cout << "Length: " << length << endl;
    }

    void append(int value)
    {
        Node *newNode = new Node(value);
        if (length == 0)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void deleteLast()
    {
        if (length == 0)
            return;
        Node *temp, *pre;
        if (length == 1)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            while (temp->next)
            {
                pre = temp;
                temp = temp->next;
            }
            tail = pre;
            tail->next = nullptr;
        }
        delete temp;
        length--;
    }
};

int main()
{

    Link_list *myLinkedList = new Link_list(4);

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    cout << "\nLinked List:\n";
    myLinkedList->printList();

    // testing the deleteLast function
    myLinkedList->append(2);

    cout << "LL before deleteLast():\n";
    myLinkedList->printList();

    myLinkedList->deleteLast();
    cout << "\n\nLL after 1st deleteLast():\n";
    myLinkedList->printList();

    myLinkedList->deleteLast();
    cout << "\n\nLL after 2nd deleteLast():\n";
    myLinkedList->printList();

    myLinkedList->deleteLast();
    cout << "\n\nLL after 3rd deleteLast():\n";
    myLinkedList->printList();
}