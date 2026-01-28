---
title: Array
parent: Programming Fundamentals
nav_order: 5
---

# [**Array**]()

An **array** is a data structure used to **store multiple values in a single variable**.  
Each value stored in an array is called an **element**, and every element has an **index** that represents its position in the array.             

In most programming languages:

* array indexes start from **0**
* elements are stored sequentially in memory

---

# Why Use Arrays?

Arrays are useful when:

* you need to store many values at once
* the values are related to each other
* you want to process data using loops

Instead of creating many separate variables, an array allows you to **group data together**.

---

# [Array Index]()

The **index** is used to access elements inside an array.

Example:

```
Index:   0   1   2
Values: 10  20  30
```

* `array[0]` → first element
* `array[1]` → second element

---

# Creating an Array (Conceptually)

In general, creating an array involves three steps:

1. **Declare an array variable**
2. **Define the array size** (in some languages)
3. **Assign values to each element**

Depending on the programming language, these steps can be done:

* in **one statement**, or
* **separately**

---

# Example: Array Declaration

## Python

```python
numbers = [10, 20, 30]
```

## C

```c
int numbers[3] = {10, 20, 30};
```

---

# Accessing Array Elements

You can access elements using their index.

## Example (Python)

```python
numbers = [10, 20, 30]
print(numbers[0])   # Output: 10
```

---

## Data Types in Arrays

In many languages:

* all elements in an array must have the **same data type**

Example (C):

```c
int numbers[3] = {1, 2, 3};
```

In some languages:

* arrays can store **different data types**

Example (Python):

```python
data = [1, "apple", 3.14, True]
```

---

# [Multidimensional Arrays]()

A **multidimensional array** is an array that contains other arrays.

The most common example is a **2D array** (array inside an array).

## Example (Python)

```python
matrix = [
    [1, 2, 3],
    [4, 5, 6]
]
```

Here:

* `matrix[0][1]` → value `2`
* two indexes are used (row and column)

---

# In Short

* An **array** stores multiple values in one variable
* Each element has an **index**, usually starting from `0`
* Arrays help organize data and work efficiently with loops
* Arrays can be **one-dimensional** or **multi-dimensional**

Arrays are a fundamental concept and prepare you for:

* loops
* data structures
* algorithm design
