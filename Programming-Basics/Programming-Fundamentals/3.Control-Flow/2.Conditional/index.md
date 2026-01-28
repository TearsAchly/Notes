---
title: Conditional
parent: Control Flow
has_children: true
nav_order: 2
---

# Conditional Statements

**Conditional statements** (also called branching) allow a program to **make decisions**.  
They control which part of the code is executed based on whether a certain condition is **true** or **false**.  
In programming, this decision-making process is a core part of **control flow**.

---

# What Is a Conditional?

A conditional evaluates a **condition**—an expression that results in either `true` or `false`.

This condition can involve:

* **Comparison operators**  
  Used to compare two values  
  Examples: `>`, `<`, `>=`, `<=`, `==`, `!=`

* **Logical operators**  
  Used to combine or negate conditions  
  Examples:  
  - `and`, `or`, `not`  
  - `&&`, `||`, `!`

* **Function results**  
  Conditions can be based on values returned by a function

* **Mathematical expressions**  
  Conditions can include arithmetic calculations that evaluate to a value


Based on the result, the program decides **which code to run**.

---

# Conditional Logic and “If–Then”

If you are familiar with basic logic or mathematics, you may recognize the idea of **implication**:

> **If** a condition is true, **then** an action is performed.

This idea is directly applied in programming using conditional statements such as:

* `if`
* `if else`
* `else if`
* `switch`

---

# How Conditionals Work (Conceptually)

A conditional follows this general pattern:

* **If** condition A is true → execute block A
* **Else if** condition B is true → execute block B
* **Else** → execute a default block

In other words:

* one condition is tested
* the program chooses a path
* only the matching path is executed

---

# Why Do We Need Conditionals?

Conditionals are used to:

* make decisions in a program
* handle different situations
* control program behavior

They help answer questions like:

* Is this value valid?
* Has the user met a requirement?
* Should the program continue or stop?

At the core, conditionals work with **boolean values**: `true` or `false`.

---

# Types of Conditional Statements

In this section, conditional logic is introduced step by step:

* **If** — execute code when a condition is true
* **Else** — execute alternative code when the condition is false
* **Else If** — handle multiple conditions
* **Nested If** — conditionals inside other conditionals
* **Switch** — an alternative way to handle multiple choices

Each type builds on the previous one.

---

# Summary

* Conditionals control the flow of a program
* They execute code based on conditions
* Conditions evaluate to `true` or `false`
* Conditional logic is essential for decision-making

Understanding conditionals is a key step toward writing dynamic and intelligent programs.
