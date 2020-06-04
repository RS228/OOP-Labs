class List
{
public:
    List();
    
    void PushBack(int data);
    
    int GetSize();
    
    int& operator[](const int index);
 
    void PopFront();
    
    void PushFront(int data);

    void Insert(int data, int index);
    
    void RemoveAt(int index);
    
    void InsertAfterFirst(int data);
    
    ~List();
   
private:

    class Node
    {
    public:
        Node* pNext;
        int data;
        Node(int data = int(), Node* pNext = nullptr);
    };
    int Size;
    Node* head;

}; 
