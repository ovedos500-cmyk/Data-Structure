#include <iostream>
using namespace std;
class Array
{
private:
   int size;
   int length;
   int *items;

public:
   Array(int arrSize)
   {
      size = arrSize; // to know the size of the array at any time
      length = 0;
      items = new int[arrSize];
   }
   void Fill()
   {
      int no_of_items;
      cout << "How many items you want to fill?" << endl;
      cin >> no_of_items;

      if (no_of_items > size)
      {
         cout << "you cannot ecxeed the array size" << endl;
         return;
      }
      else
      {

         for (int i = 0; i < no_of_items; i++)
         {
            cout << "Enter item no " << i << ":" << endl;
            cin >> items[i];
            length++;
         }
      }
   }
   void Display()
   {
      cout << "Display array content\n";
      for (int i = 0; i < length; i++)
      {
         cout << items[i] << " ";
      }
      cout << endl;
   }
   int getSize()
   {
      return size;
   }
   int getLength()
   {
      return length;
   }
   int Search(int key)
   {
      int index = -1;

      for (int i = 0; i < length; i++)
      {
         if (key == items[i])
         {
            index = i;
            break;
         }
      }
      return index;
   }
   void Append(int newitem)
   {
      if (length < size)
      {
         items[length] = newitem;
         length++;
      }
      else
      {
         cout << "Array is full" << endl;
      }
   }
   void Insert(int index, int newItem)
   {
      if (index >= 0 && index < size)
      {
         for (int i = length; i > index; i--)
         {
            items[i] = items[i - 1];
         }
         items[index] = newItem;
         length++;
      }
      else
      {
         cout << "Erorr - index out of range\n";
      }
   }
   void Delete(int index)
   {
      if (index >= 0 && index < size)
      {
         for (int i = index; i < length - 1; i++)
         {
            items[i] = items[i + 1];
         }
         length--;
      }
      else
      {
         cout << "index out of Array range" << endl;
      }
   }
   void Enlarge(int newSize)
   {
      if (newSize < size)
      {
         cout << "The new size must be larger" << endl;
         return;
      }
      else
      {
         size = newSize;
         int *old = items;
         items = new int[newSize];

         for (int i = 0; i < length; i++)
         {
            items[i] = old[i];
         }

         delete[] old;
      }
   }
   void Merge(Array other)
   {
      int newSize = size + other.getSize();
      size = newSize;
      int *old = items;
      items = new int[newSize];

      int i;
      for (i = 0; i < length; i++)
      {
         items[i] = old[i];
      }
      delete[]old;

      int j = i;
      for (int i = 0; i < other.getLength(); i++)
      {
         items[j++] = other.items[i];
         length++;
      }

   }

};

int main()
{
   int i;
   cout << "Enter Array size" << endl;
   cin >> i;

   Array myarray(i);
   myarray.Fill();
   myarray.Display();

   cout << "array size is: " << myarray.getSize() << "  length is " << myarray.getLength() << endl;

}