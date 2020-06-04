#include <iostream>
#include"List.h"

using namespace std;



List::List()
    {
        Size = 0;
        head = nullptr;
    };
 void List::PushBack(int data)
    {
        if (head == nullptr)
        {
            head = new Node(data);
        }
        else
        {
            Node* current = this->head;
            while (current->pNext != nullptr)
            {
                current = current->pNext;
            }
            current->pNext = new Node(data);
        }
        Size++;
    }
    int List::GetSize()
    {
        return Size;
    }
    int& List:: operator[](const int index)
    {
        int counter = 0;
        Node* current = this->head;
        while (current != nullptr)
        {
            if (counter == index)
            {
                return current->data;
            }
            current = current->pNext;
            counter++;
        }
    }
    void List::PopFront()
    {
        Node* temp = head;
        head = head->pNext;
        delete temp;
        Size--;
    }
    void List:: PushFront(int data)
    {
        head = new Node(data, head);
        Size++;
    }
    void List:: Insert(int data, int index)
    {
        if (index == 0)
        {
            PushFront(data);
        }
        else
        {
            Node* previous = this->head;
            for (int i = 0; i < index - 1; i++)
            {
                previous = previous->pNext;
            }
            Node* NewNode = new Node(data, previous->pNext);
            previous->pNext = NewNode;
            Size++;
        }
    }
    void List:: RemoveAt(int index)
    {
        if (index == 0)
        {
            PopFront();
        }
        else
        {
            Node* previous = this->head;
            for (int i = 0; i < index - 1; i++)
            {
                previous = previous->pNext;
            }
            Node* RemoveEl = previous->pNext;
            previous->pNext = RemoveEl->pNext;
            delete RemoveEl;
            Size--;
        }
    }
    void List:: InsertAfterFirst(int data)
    {
        Insert(data, 1);
    }
    List:: ~List()
    {
        while (Size)
        {
            PopFront();
        }
    };

    List::Node::Node(int data , Node* pNext )
    {
        this->pNext = pNext;
        this->data = data;

    };
  

