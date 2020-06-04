#include <iostream>
#include"List.h"

using namespace std;



int main()
{
    List Digits;

    Digits.PushBack(0);
    Digits.PushBack(3);
    Digits.PushBack(-1);
    Digits.PushBack(4);

    int MultiplesOfTwo = 0;
    for (int i = 0; i < Digits.GetSize(); i++)
    {
        cout << Digits[i] << "\t";
        if (Digits[i] % 2 == 0&&i%2==0)
        {
            MultiplesOfTwo++;
        }
    }
    cout <<MultiplesOfTwo << endl;
    int MinIndex = 0;
    int Min = Digits[MinIndex];
    for (int i = 0; i < Digits.GetSize(); i++)
    {
        if (Digits[i] < Min)
        {
            Min = Digits[i];
            MinIndex = i;
        }
    }
    int PreviousListSize = Digits.GetSize();
    for (int i = 0; i < PreviousListSize-MinIndex-1; i++)
    {
        Digits.RemoveAt(MinIndex + 1);
    }
    cout << "New List " << Digits.GetSize()<<endl;
    for (int i = 0; i < Digits.GetSize(); i++)
    {
        cout << Digits[i] << "\t";
    }
    return 0;

}















































//
//
//class List
//{
//public:
//    List()
//    {
//        Size = 0;
//        head = nullptr;
//    };
//    void PushBack(int data)
//    {
//        if (head == nullptr)
//        {
//            head = new Node(data);
//        }
//        else
//        {
//            Node* current = this->head;
//            while (current->pNext != nullptr)
//            {
//                current = current->pNext;
//            }
//            current->pNext = new Node(data);
//        }
//        Size++;
//    }
//    int GetSize()
//    {
//        return Size;
//    }
//    int& operator[](const int index)
//    {
//        int counter = 0;
//        Node* current = this->head;
//        while (current != nullptr)
//        {
//            if (counter == index)
//            {
//                return current->data;
//            }
//            current = current->pNext;
//            counter++;
//        }
//    }
//    void PopFront()
//    {
//        Node* temp = head;
//        head = head->pNext;
//        delete temp;
//        Size--;
//    }
//    void PushFront(int data)
//    {
//        head = new Node(data, head);
//        Size++;
//    }
//    void Insert(int data, int index)
//    {
//        if (index == 0)
//        {
//            PushFront(data);
//        }
//        else
//        {
//            Node* previous = this->head;
//            for (int i = 0; i < index - 1; i++)
//            {
//                previous = previous->pNext;
//            }
//            Node* NewNode = new Node(data, previous->pNext);
//            previous->pNext = NewNode;
//            Size++;
//        }
//    }
//    void RemoveAt(int index)
//    {
//        if (index == 0)
//        {
//            PopFront();
//        }
//        else
//        {
//            Node* previous = this->head;
//            for (int i = 0; i < index - 1; i++)
//            {
//                previous = previous->pNext;
//            }
//            Node* RemoveEl = previous->pNext;
//            previous->pNext = RemoveEl->pNext;
//            delete RemoveEl;
//            Size--;
//        }
//    }
//    void InsertAfterFirst(int data, int index)
//    {
//        Insert(data, 1);
//    }
//    ~List()
//    {
//        while (Size)
//        {
//            PopFront();
//        }
//    };
//private:
//
//
//    class Node
//    {
//    public:
//        Node* pNext;
//        int data;
//        Node(int data = int(), Node* pNext = nullptr)
//        {
//            this->pNext = pNext;
//            this->data = data;
//
//        }
//    };
//    int Size;
//    Node* head;
//
//};

