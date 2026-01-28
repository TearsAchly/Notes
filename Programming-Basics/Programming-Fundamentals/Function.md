---
title: Function
parent: Programming Fundamentals
nav_order: 4
---

# [Function]()

A **function** in programming is a separate block of code that performs a **specific task**. A function acts as a **subprogram** inside a larger program. Instead of writing all logic in one place, functions process **a part of the main program’s work**. By using functions, programs become more **structured**, **cleaner**, and **easier to develop**.

---

# Why Functions Are Important

Functions help to:

* break complex tasks into simpler ones
* reduce duplicated code
* reuse the same code in different programs
* divide large programs into smaller steps
* hide implementation details from users
* improve debugging and error tracking

In short, functions make programs easier to **understand**, **maintain**, and **scale**.

---

# Types of Functions

In general, there are **two types of functions**:

## [1. Built-in Functions]()

**Built-in functions** are functions provided directly by a programming language.
They can be used **immediately**, without defining them yourself.

### Example: Built-in Function

**Python**

```python
print("Hello, World")
```

* `print()` is a built-in function
* It outputs text to the screen

Other examples of built-in functions:

* `len()`
* `type()`
* `input()`


## [2. User-Defined Functions (UDF)]()

**User-defined functions** are functions created by the programmer.

They are used when built-in functions are not enough to solve a problem.

### Defining a User-Defined Function

```python
def greet():
    print("Hello, World")
```

Calling the function:

```python
greet()
```

---

# Functions With and Without Return Values

## Function Without Return Value

This type of function performs an action but does **not return a value**.

```python
def say_hello():
    print("Hello")
```

---

## Function With Return Value

A function can return a value using the `return` keyword.
The returned value is often stored in a variable and used later.

```python
def add(a, b):
    return a + b
```

Using the return value:

```python
result = add(3, 5)
print(result)
```

---

# Function Naming Rules

Function names must follow **identifier rules**, just like variables:

* must not start with a number
* must not contain spaces
* must not use reserved keywords
* names are case-sensitive

Common naming styles:

* `snake_case`
* `camelCase`

## Examples

```text
# Valid
calculate_sum
getUserName

# Invalid
2calculate
my function
print
```

---

# Parameters and Arguments

Functions can accept input values.

## Parameters

**Parameters** are variables listed in the function definition.
They act as placeholders for input values.

```python
def greet(name):
    print("Hello,", name)
```

Here, `name` is a **parameter**.

---

## Arguments

**Arguments** are the actual values passed to a function when it is called.

```python
greet("Achly")
```

Here, `"Achly"` is an **argument**.

---

# Summary

* A **function** is a reusable block of code
* Functions help structure and simplify programs
* There are **built-in** and **user-defined** functions
* Functions may return a value or not
* Parameters define input, arguments provide input

Functions are a core building block of programming and prepare you for:

* modular programming
* clean code practices
* advanced topics like recursion and OOP
