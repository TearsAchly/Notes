---
title: Nested If
parent: Conditional
nav_order: 4
---

# Nested If

A **nested if** is an `if` statement placed **inside another if statement**.

It is used when a decision depends on **another decision**.

---

# How Nested If Works

Conceptually:

* Check the outer condition first
* If true, check the inner condition
* The inner condition only runs if the outer one is true

## Example (Python)

```python
age = 20
has_ticket = True

if age >= 18:
    if has_ticket:
        print("You may enter.")
    else:
        print("You need a ticket.")
else:
    print("You are underage.")
```

### Explanation:

* The program checks `age >= 18` first
* Only then does it check `has_ticket`

---

# When to Use Nested If

Use nested `if` statements when:

* one condition depends on another
* checks must happen in a specific order

⚠️ Be careful:
Too many nested conditions can make code hard to read.

---

# Summary

* Nested `if` means an `if` inside another `if`
* Conditions are evaluated step by step
* Useful, but should be used carefully
