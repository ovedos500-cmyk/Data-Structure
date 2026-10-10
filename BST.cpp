#include <iostream>
using namespace std;

class Node
{
public:
   int data;
   Node *right, *left;

   Node(int value)
   {
      data = value;
      left = right = NULL;
   }
};

class BST
{
public:
   Node *root;

   BST()
   {
      root = NULL;
   }

   Node *Insert(Node *r, int item)
   {
      if (r == NULL)
      {
         Node *newnode = new Node(item);
         r = newnode;
      }
      else if (item < r->data)
      {
         r->left = Insert(r->left, item);
      }
      else
      {
         r->right = Insert(r->right, item);
      }
      return r;
   }

   void Insert(int item)
   {
      root = Insert(root, item);
   }

   void Preorder(Node *r) // root -> left -> right
   {
      if (r == NULL)
      {
         return;
      }

      cout << r->data << "  ";
      Preorder(r->left);
      Preorder(r->right);
   }

   void inorder(Node *r) //  left -> root -> right
   {
      if (r == NULL)
      {
         return;
      }

      inorder(r->left);
      cout << r->data << "  ";
      inorder(r->right);
   }

   void Postorder(Node *r) //  left -> right -> root
   {
      if (r == NULL)
      {
         return;
      }

      Postorder(r->left);
      Postorder(r->right);
      cout << r->data << "  ";
   }

   Node *Search(Node *r, int key)
   {
      if (r == NULL)
      {
         return NULL;
      }
      else if (r->data == key)
      {
         return r;
      }
      else if (key < r->data)
      {
         return Search(r->left, key);
      }
      else
      {
         return Search(r->right, key);
      }
   }

   bool Search(int key)
   {
      Node *result = Search(root, key);

      if (result == NULL)
         return false;
      else
         return true;
   }

   Node *Findmin(Node *r)
   {
      if (r == NULL)
         return NULL;
      else if (r->left == NULL)
         return r;
      else
         return Findmin(r->left);
   }

   Node *Findmax(Node *r)
   {
      if (r == NULL)
         return NULL;
      else if (r->right == NULL)
         return r;
      else
         return Findmax(r->right);
   }

   Node *Delete(Node *r, int key)
   {
      if (r == NULL)
         return NULL;

      if (key < r->data)
         r->left = Delete(r->left, key);
      else if (key > r->data)
         r->right = Delete(r->right, key);
      else
      {
         if (r->left == NULL && r->right == NULL)
         {
            r = NULL;
         }
         else if (r->left != NULL && r->right  == NULL)
         {
            r->data = r->left->data;
            delete r->left;
            r->left = NULL;

         }
         else if (r->left == NULL && r->right  != NULL)
         {
            r->data = r->right->data;
            delete r->right;
            r->right = NULL;

         }
         else
         {
            Node *max = Findmax(r->left);
            r->data = max->data;
            r->left = Delete(r->left,max->data);
            
         }
      }
      return r;
   }
};
int main()
{
   // operations:
   // Insert(item), Preorder(root), inorder(root), postorder(root), Search(key), Findmin(root), Findmax(root), Delete(root, key)
   
   BST ob;
   int item, size;
   cout << "How many item you want to add?" << endl;
   cin >> size;

   for (int i = 0; i < size; i++)
   {
      cout << "Enter item no " << i + 1 << endl;
      cin >> item;
      ob.Insert(item);
   }

   ob.Preorder(ob.root);
   cout << endl;
  

}