---
title: "What Is Coding?"
parent: Programming Fundamentals
nav_order: 1
---

# What Is Coding?

**Coding** is the activity of writing lines of code using a programming language. Its purpose is to allow humans to communicate instructions to a computer. Computers do not understand human language.
At the lowest level, they operate using electrical signals **on** and **off** controlled by transistors. These signals are represented as binary values: **0** and **1**.  

A group of 8 binary digits forms a **byte**, which represents information at the hardware level.  
In modern computing systems, **billions of bytes** are processed simultaneously.

---

# From Binary to Programming Languages

Writing instructions directly in binary would be extremely difficult for humans. Programming languages exist to **simplify this process**.  
Instead of dealing with raw bytes, programmers use:

* symbols
* keywords
* structured rules

These rules form what we call **syntax**.

Before a program can run, the code written by a programmer must be **translated** into a form the computer understands.
This translation happens in different ways:

* **Compiled languages**
  Code is translated into machine code before execution.

* **Interpreted languages**
  Code is translated and executed line by line at runtime.

* **Just-In-Time (JIT) compilation**
  Code is compiled during execution for better performance.

---

## Syntax and Semantics

Every programming language is defined by **syntax** and **semantics**.

### Syntax

**Syntax** refers to the rules that define how code must be written.
It specifies which combinations of characters are considered valid.

Each programming language has its own syntax, even for simple tasks.

For example, printing “Hello, World” looks different in different languages because the syntax rules differ.

## Example: Different Syntax, Same Intent

**Python**

```python
print("Hello, World!")
```

**JavaScript**

```javascript
console.log("Hello, World!");
```

**C**

```c
printf("Hello, World!");
```

The goal is the same, but the syntax rules are different.

---

# Semantics

**Semantics** refers to the *meaning* of the code.

A program can be:

* syntactically correct
* but semantically wrong

This means the code follows the rules, but does not do what the programmer intended.

## Example: Correct Syntax, Wrong Meaning

```python
width = 10
height = 0
area = width / height
```

The syntax is valid, but the program is **semantically wrong** because dividing by zero does not make sense.

---

# Statements and Expressions

In programming, code is commonly built from **statements** and **expressions**.

## Statements

A **statement** is a unit of syntax that performs an action or task.

Examples include:

* assigning a value
* controlling program flow
* executing a command

## Expressions

An **expression** is a unit of syntax that produces a value.

Examples include:

* constants
* variables
* function calls
* operators

An expression always results in a value.

## Example: Statements vs Expressions

**Expression**

```python
3 + 5
```

This expression produces a value: `8`.

**Statement**

```python
result = 3 + 5
```

This statement performs an action by assigning a value.

In many languages, **statements and expressions can overlap**—an expression may appear inside a statement.

---

# In Short

* **Statements** are used to perform actions
* **Expressions** are used to produce values
* Together, they form the building blocks of programs

Coding is not just writing syntax.
It is about understanding how instructions are structured and how meaning is expressed through code.
