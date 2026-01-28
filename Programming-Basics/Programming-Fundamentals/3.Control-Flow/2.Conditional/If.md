---
title: If
parent: Conditional
nav_order: 1
---

# If Statement

An **if statement** is the simplest form of conditional logic.

It allows a program to execute a block of code **only if a condition is true**.

---

# How an If Statement Works

Conceptually:

* The program checks a condition
* If the condition is `true`, the code inside the `if` block is executed
* If the condition is `false`, the code is skipped

---

# Example (Python)

```python
age = 18

if age >= 18:
    print("You are allowed to enter.")
```

## Explanation:

* The condition `age >= 18` is evaluated
* If the condition is true, the message is printed

---

# When to Use `if`

Use an `if` statement when:

* you only care about one condition
* there is no alternative action needed
* you want to guard a piece of code

---

# Summary

* `if` checks a condition
* Code runs **only when the condition is true**
* It is the foundation of all conditional logic
