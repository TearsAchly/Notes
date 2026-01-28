---
title: Else If
parent: Conditional
nav_order: 3
---

# Else If Statement

An **else if** statement allows a program to check **multiple conditions** in sequence.

It is used when there are **more than two possible cases**.

---

# How Else If Works

Conceptually:

* Check the first condition
* If false, check the next condition
* Continue until a condition is true
* If none are true, run the `else` block (optional)

Only **one block** will be executed.

## Example (Python)

```python
score = 75

if score >= 90:
    print("Grade: A")
elif score >= 75:
    print("Grade: B")
elif score >= 60:
    print("Grade: C")
else:
    print("Grade: F")
```

### Explanation:

* Conditions are checked **from top to bottom**
* The first matching condition is executed
* The rest are skipped

---

# When to Use `else if`

Use `else if` when:

* you have multiple conditions
* conditions are mutually exclusive
* only one outcome should happen

---

# Summary

* `else if` handles multiple conditions
* Conditions are checked in order
* Only one block runs
