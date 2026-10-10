#include <iostream>
using namespace std;

class Node
{
public:
   int Data;
   Node *Next;

   Node()
   {
      Data = 0;
      Next = NULL;
   }
};

class Stack
{
   Node *Top;

public:
   Stack()
   {
      Top = NULL;
   }

   bool isEmpty()
   {
      return (Top == NULL);
   }

   bool isfull()
   {
      Node* Ptr = new Node();
      if(Ptr == NULL)
         cout << "The stack is full, cannot add more items " << endl;
    
         
   }
   void Push(int item)
   {
      Node *newnode = new Node();
      newnode->Data = item;

      newnode->Next = Top;
      Top = newnode;
   }

   void Display()
   {
      Node *Temp = Top;
      cout << "items: ";
      while (Temp != NULL)
      {
         cout << Temp->Data << " ";
         Temp = Temp->Next;
      }
      cout << endl;
   }

   int count()
   {
      int count = 0;
      Node *Temp = Top;

      while (Temp != NULL)
      {
         count++;
         Temp = Temp->Next;
      }
      return count;
   }
   bool Search(int item)
   {
      Node *Temp = Top;

      while (Temp != NULL)
      {
         if (Temp->Data == item)
            return true;
         else
            return false;

         Temp = Temp->Next;
      }
   }

   int pop()
   {
      if (isEmpty())
      {
         cout << "The list is aleready empty" << endl;
      }
      else
      {
         int value;
         value = Top->Data;
         Node *delptr = Top;
         Top = Top->Next;
         delete delptr;
         return value;
      }
   }

   int Peek()
   {
      return Top->Data;
   }
};
int main()
{
   // operations: 
   // isEmpty(), isfull(), Push(item), Display(), count(), Search(item), pop(), Peek()
   Stack lis;
   int item, size;
   cout << "Enter the number of items you want to add" << endl;
   cin >> size;

   for (int i = 0; i < size; i++)
   {
      cout << "Enter The vlaue of " << i + 1 << " item" << endl;
      cin >> item;

      lis.Push(item);
   }
   lis.Display();

  

  
}