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

class Queue
{
public:
   Node *Front;
   Node *Rear;

   Queue()
   {
      Front = Rear = NULL;
   }

   bool isEmpty()
   {
      return (Front == NULL);
   }

   void Enqueue(int item)
   {
      Node *newnode = new Node();
      newnode->Data = item;

      if (isEmpty())
      {
         Front = Rear = newnode;
      }
      else
      {
         Rear->Next = newnode;
         Rear = newnode;
      }
   }

   void Display()
   {
      if (isEmpty())
      {
         cout << "Queue is empty, no items to display" << endl;
      }
      else
      {
         Node *Temp = Front;
         cout << "Queue items:";
         while (Temp != NULL)
         {
            cout << Temp->Data << " ";
            Temp = Temp->Next;
         }
         cout << endl;
      }
   }

   int Dequeue()
   {
      int delitem = -1;
      if (isEmpty())
      {
         cout << "The queue is already empty" << endl;
      }
      else if (Front == Rear)
      {
         delete Front;
         Front = Rear = NULL;
      }
      else
      {
         Node *delptr = Front;
         Front = Front->Next;
         delitem = delptr->Data;
         delete delptr;
      }
      return delitem;
   }

   int Getfront()
   {
      return Front->Data;
   }

   int Getrear()
   {
      return Rear->Data;
   }

   int Count()
   {
      int counter;
      Node *Temp = Front;
      while (Temp != NULL)
      {
         counter++;
         Temp = Temp->Next;
      }
      return counter;
   }

   bool isFound(int item)
   {
      Node *Temp = Front;
      bool found = false;
      while (Temp != NULL)
      {
         if (item == Temp->Data)
            found = true;
         Temp = Temp->Next;
      }
      return found;
   }

   void Clear()
   {
      while(!isEmpty())
      {
         Dequeue();
      }
   }
};
int main()
{
   // operations: 
   //  isEmpty(), Enqueue(int item), Dequeue(), Display(), Getfront(), Getrear(), Count(), isFound(int item), Clear() 
         
   Queue lis;
   int item, size;
   cout << "How many items you want to add?" << endl;
   cin >> size;

   for (int i = 0; i < size; i++)
   {
      cout << "Element " << i + 1 << " :";
      cin >> item;
      lis.Enqueue(item);
   }
   lis.Display();

}