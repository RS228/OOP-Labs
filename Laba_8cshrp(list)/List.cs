using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

namespace Lists
{
    public class List : IEnumerable
    {

        public class Node
        {
            public Node Next { get; set; }
            public int data { get; set; }
            public Node(int data, Node Next)
            {
                this.Next = Next;
                this.data = data;

            }
        };
        public int Size { get; private set; }
        public Node head { get; private set; }

        public List()
        {
            Size = 0;
            head = null;
        }
        public void PushBack(int data)
        {
            if (head == null)
            {
                head = new Node(data, null);
            }
            else
            {
                Node current = this.head;
                while (current.Next != null)
                {
                    current = current.Next;
                }
                current.Next = new Node(data, null);
            }
            Size++;
        }

        public void PopFront()
        {
            Node temp = head;
            head = head.Next;
            Size--;
        }
        public void PushFront(int data)
        {
            head = new Node(data, head);
            Size++;
        }
        public void Insert(int data, int index)
        {
            if (index == 0)
            {
                PushFront(data);
            }
            else
            {
                Node previous = this.head;
                for (int i = 0; i < index - 1; i++)
                {
                    previous = previous.Next;
                }
                Node NewNode = new Node(data, previous.Next);
                previous.Next = NewNode;
                Size++;
            }
        }
        public void RemoveAt(int index)
        {
            if (index == 0)
            {
                PopFront();
            }
            else
            {
                Node previous = this.head;
                for (int i = 0; i < index - 1; i++)
                {
                    previous = previous.Next;
                }
                Node RemoveEl = previous.Next;
                previous.Next = RemoveEl.Next;
                Size--;
            }
        }
        public void InsertAfterFirst(int data, int index)
        {
            Insert(data, 1);
        }
        IEnumerator IEnumerable.GetEnumerator()
        {
            Node current = head;
            while (current != null)
            {
                yield return current.data;
                current = current.Next;
            }
        }
        public int this[int index]
        {
            get
            {
                Node previous = head;
                for (int i = 0; i < index;i++)
                {
                    previous = previous.Next;
                }
                return previous.data;
            }
            set
            {
                Node previous = head;
                for (int i = 0; i < index; i++)
                {
                    previous = previous.Next;
                }
                previous.data = value;

            }
        }
        public int MultiplesOfTwo()
        {
            int MultiplesOfTwo = 0;
            for (int i = 0; i < this.Size; i++)
            {
                if (this[i] % 2 == 0 && i % 2 == 0)
                {
                    MultiplesOfTwo++;
                }
            }
            return MultiplesOfTwo;
        }
        public void RemoveAfterMin()
        {
            int MinIndex = 0;
            int Min = this[MinIndex];
            for (int i = 0; i < this.Size; i++)
            {
                if (this[i] < Min)
                {
                    Min = this[i];
                    MinIndex = i;
                }
            }
            int PreviousListSize = this.Size;
            for (int i = 0; i < PreviousListSize - MinIndex - 1; i++)
            {
                this.RemoveAt(MinIndex + 1);
            }
        }

    } 
}

