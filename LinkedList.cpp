#include <iostream>
using namespace std;

class Node
{
public:
   int Data;
   Node *Next;
};

class Linkedlist
{
public:
   Node *Head;

   Linkedlist()
   {
      Head = NULL;
   }
   bool isEmpty()
   {
      return (Head == NULL);
   }
   void InsertFirst(int newvalue)
   {

      Node *newnode = new Node();
      newnode->Data = newvalue;
      if (isEmpty())
      {
         newnode->Next = NULL;
         Head = newnode;
      }
      else
      {
         newnode->Next = Head;
         Head = newnode;
      }
   }
   void Insertbefore(int item, int newvalue)
   {
      if (isEmpty())
      {
         InsertFirst(newvalue);
      }
      else
      {
         if (isFound(item))
         {

            Node *newnode = new Node();
            newnode->Data = newvalue;
            Node *Temp = Head;

            while (Temp != NULL && Temp->Next->Data != item)
            {
               Temp = Temp->Next;
            }

            newnode->Next = Temp->Next;
            Temp->Next = newnode;
         }
         else
         {
            cout << "Sorry, item not found" << endl;
         }
      }
   }
   void Append(int newitem)
   {
      if (isEmpty())
      {
         InsertFirst(newitem);
      }
      else
      {

         Node *newnode = new Node();
         newnode->Data = newitem;
         Node *Temp = Head;

         while (Temp->Next != NULL)
         {
            Temp = Temp->Next;
         }

         Temp->Next = newnode;
         newnode->Next = NULL;
      }
   }
   void Display()
   {
      Node *Temp = Head;

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
      Node *Temp = Head;

      while (Temp != NULL)
      {
         count++;
         Temp = Temp->Next;
      }
      return count;
   }
   bool isFound(int key)
   {

      Node *Temp = Head;
      bool found = false;
      while (Temp != NULL)
      {
         if (Temp->Data == key)
         {
            found = true;
            return found;
         }
         Temp = Temp->Next;
      }
      return found;
   }
   void Delete(int item)
   {
      if (isFound(item))
      {
         if (isEmpty())
         {
            cout << "List is empty, no items to delete" << endl;
            return;
         }

         if (Head->Data == item)
         {
            Node *newnode = Head;
            Head = Head->Next;
            delete newnode;
            return;
         }
         else
         {
            Node *delptr = Head;
            Node *prev = NULL;

            while (delptr->Data != item)
            {
               prev = delptr;
               delptr = delptr->Next;
            }

            prev->Next = delptr->Next;
            delete delptr;
         }
      }
      else
      {
         cout << "Sorry, item not found in the list" << endl;
      }
   }
};
int main()
{
   // operations:
   // isEmpty(), InsertFirst(int newvalue), Insertbefore(int item, int newvalue), Append(int newitem),
   // Display(), count(), isFound(int key), Delete(int item)
   
   Linkedlist lis;
   int item, size;
   cout << "How many items you want to add?" << endl;
   cin >> size;

   for (int i = 0; i < size; i++)
   {
      cout << "Element " << i + 1 << " :";
      cin >> item;
      lis.InsertFirst(item);
   }
   lis.Display();
}