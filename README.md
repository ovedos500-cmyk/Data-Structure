# Data Structures in C++ 🚀

This repository contains C++ implementations of fundamental Data Structures from scratch. It serves as a practical application of Object-Oriented Programming (OOP) principles and algorithmic logic.

## 📂 Repository Contents

Here is a list of the data structures implemented in this repository, along with the operations supported by each:

### 1. Array (`Array.cpp`)
A dynamic-like custom Array class that supports dynamic resizing and basic array manipulations.
* **Operations:** 
  * `Fill()`: Fill array elements.
  * `Display()`: Print array content.
  * `Append(item)`: Add an item to the end.
  * `Insert(index, item)`: Insert an item at a specific index.
  * `Delete(index)`: Remove an item by its index.
  * `Search(key)`: Find the index of a specific element.
  * `Enlarge(newSize)`: Dynamically increase the array size.
  * `Merge(otherArray)`: Merge two arrays together.
  * `getSize()`, `getLength()`: Get capacity and current number of elements.

### 2. Linked List (`LinkedList.cpp`)
A Singly Linked List implementation managing nodes and dynamic memory allocation.
* **Operations:**
  * `InsertFirst(item)`: Add a node at the beginning.
  * `Append(item)`: Add a node at the end.
  * `Insertbefore(item, newValue)`: Insert a node before a specific existing item.
  * `Delete(item)`: Remove a node by its value.
  * `Display()`: Traverse and print the list.
  * `count()`: Get the total number of nodes.
  * `isFound(key)`: Search for an element.
  * `isEmpty()`: Check if the list is empty.

### 3. Queue (`Queue.cpp`)
A Queue implementation based on Linked Nodes (FIFO - First In, First Out).
* **Operations:**
  * `Enqueue(item)`: Add an item to the rear.
  * `Dequeue()`: Remove and return the front item.
  * `Getfront()`: Get the value of the front item.
  * `Getrear()`: Get the value of the rear item.
  * `Display()`: Print all queue elements.
  * `Clear()`: Empty the queue completely.
  * `Count()`: Get the number of elements.
  * `isFound(item)`: Check if an item exists.

### 4. Stack (`Stack.cpp`)
A Stack implementation based on Linked Nodes (LIFO - Last In, First Out).
* **Operations:**
  * `Push(item)`: Add an item to the top.
  * `pop()`: Remove and return the top item.
  * `Peek()`: View the top item without removing it.
  * `Display()`: Print all stack elements.
  * `count()`: Get the number of elements.
  * `Search(item)`: Find if an element exists.
  * `isEmpty()`, `isfull()`: Check stack status.

### 5. Binary Search Tree (`BST.cpp`)
A Binary Search Tree implementation with common traversal methods and node management.
* **Operations:**
  * `Insert(item)`: Add a new node in its correct BST position.
  * `Delete(key)`: Remove a node while maintaining BST properties.
  * `Search(key)`: Find a specific node.
  * `Findmin()`: Find the minimum value in the tree.
  * `Findmax()`: Find the maximum value in the tree.
  * **Traversals:** 
    * `Preorder()` (Root -> Left -> Right)
    * `inorder()` (Left -> Root -> Right)
    * `Postorder()` (Left -> Right -> Root)

## 🛠️ How to Run

To compile and run any of these files on your local machine, you need a C++ compiler (like `g++`). Use the following commands in your terminal:

```bash
# Example for compiling and running the LinkedList code
g++ LinkedList.cpp -o linkedlist
./linkedlist
```

## 👨‍💻 Author
Created as part of learning and mastering Data Structures and Algorithms in C++.
