---
title: Else
parent: Conditional
nav_order: 2
---

# Else Statement

An **else statement** is used together with `if`.

It defines what should happen **when the if condition is false**.

---

# How If–Else Works

Conceptually:

* If the condition is true → run the `if` block
* Otherwise → run the `else` block

Only **one** of the two blocks will be executed.

## Example (Python)

```python
age = 16

if age >= 18:
    print("You are allowed to enter.")
else:
    print("Access denied.")
```

### Explanation:

* If `age >= 18` is false
* The program runs the `else` block instead

---

# When to Use `else`

Use `else` when:

* you need a fallback action
* there are exactly two possible outcomes
* one condition is true and the other is false

# Summary

* `else` handles the opposite case of `if`
* It runs when the `if` condition is false
* Together, `if` and `else` cover two paths
