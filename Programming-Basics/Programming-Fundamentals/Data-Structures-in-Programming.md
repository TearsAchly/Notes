---
title: Data Structures in Programming
parent: Programming Fundamentals
nav_order: 7
---

#  What Is a Data Structure?

A **Data Structure** is a specialized way to **store, organize, manage, and process data** so that it can be used **efficiently**.  
Technically, data is stored in the form of:
- numbers
- characters
- symbols  

These data are arranged in specific formats such as rows, columns, or linked relationships.  
Data structures are widely used in:
- database management
- file compression
- large-scale data processing
- software and system development

---

#  Basic Terminology in Data Structures

## 🔹 Node
A **node** is a fundamental unit in a data structure.  
Each node usually contains:
- **data**
- a **pointer/reference** to another node

Examples:
- In a linked list, a node stores data and a reference to the next node
- In a tree, a node stores data and references to child nodes


## 🔹 Index
An **index** is a position indicator that allows **faster access to data**.

Example:
- Arrays use indexes to access elements directly  
  `array[3]`

---

# Types of Data Structures

##  [**Array**]()

An **array** is a collection of elements stored **sequentially** and accessed using an **index**.

### Characteristics:
- elements are stored in adjacent memory locations
- usually store data of the same type
- fixed size

### Example:
```js
let numbers = [10, 20, 30, 40];
console.log(numbers[2]); // 30
````

### Advantages:

* very fast data access (random access)
* simple and easy to use
* foundation for other data structures (stack, queue)

### Disadvantages:

* fixed size
* slow insertion and deletion
* inefficient memory usage if not fully utilized


## [**Linked List**]()

A **Linked List** is a linear data structure consisting of nodes connected by references.

### Types of Linked List:

* [**Singly Linked List**]()
* [**Doubly Linked List**]()
* [**Circular Linked List**]()

### Concept Illustration:

```
Data | Next → Data | Next → Data | Null
```

### Advantages:

* dynamic size
* fast insertion and deletion
* flexible memory allocation

### Disadvantages:

* no random access
* slower traversal
* extra memory required for pointers


## [**Stack**]()

A **Stack** is a linear data structure that follows the principle:

* **LIFO** (Last In, First Out)
* **FILO** (First In, Last Out)

### Example:

```js
stack.push(10);
stack.push(20);
stack.pop(); // 20
```

### Illustration:

```
Push: 10 → 20 → 30
Pop : 30 → 20 → 10
```

### Advantages:

* efficient data management
* useful for recursion, undo/redo operations
* simple implementation

### Disadvantages:

* limited capacity
* risk of overflow
* no random data access


## [**Queue**]()

A **Queue** is a linear data structure that follows:

* **FIFO** (First In, First Out)

### Example:

```js
queue.enqueue(10);
queue.enqueue(20);
queue.dequeue(); // 10
```

### Illustration:

```
Enqueue: 10 → 20 → 30
Dequeue: 10 → 20 → 30
```

### Advantages:

* data processed in order
* suitable for scheduling and buffering
* efficient for handling requests

### Disadvantages:

* difficult to modify elements in the middle
* delays can occur if the queue is long


##  [**Tree**]()

A **Tree** is a non-linear data structure that represents data in a **hierarchical** form.

### Tree Terminology:

* **Root** → topmost node
* **Parent** → node with child nodes
* **Child** → descendant of a node
* **Sibling** → nodes with the same parent
* **Leaf** → node with no children

### Common Uses:

* file systems
* HTML DOM
* database indexing

### Advantages:

* fast searching
* clear hierarchical representation

### Disadvantages:

* insertion can be complex
* implementation is more difficult than linear structures


##  [**Graph**]()

A **Graph** is a data structure made of **vertices (nodes)** and **edges (connections)**.

### Common Uses:

* maps and navigation systems
* social networks
* network routing

### Advantages:

* represents complex relationships well
* flexible data modeling

### Disadvantages:

* complex algorithms
* data modification can be slow

##  [**Hash Table**]()

A **Hash Table** stores data in **key–value pairs** using a hash function.

### Example:

```js
let user = {
  name: "Achly",
  age: 20
};
```

### Advantages:

* extremely fast data lookup (O(1))
* efficient for database indexing
* easy data synchronization

### Disadvantages:

* hash collisions may occur
* requires good hash function design

---

# Conclusion

Each data structure has its own:

* purpose
* advantages
* limitations

Choosing the correct data structure is essential for:

* application performance
* memory efficiency
* effective data management
