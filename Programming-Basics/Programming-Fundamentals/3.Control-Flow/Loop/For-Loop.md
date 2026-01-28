---
title: For Loop
parent: Loop
nav_order: 2
---

# [For Loop]()

A **for loop** is a type of loop used when the number of repetitions is **known in advance**.  
It is commonly used for:

* counting
* iterating over a range of values
* repeating an action a fixed number of times

---

# The Three Main Parts of a For Loop

A for loop usually consists of **three key parts**:

1. **Initial condition**
   Sets the starting point of the loop.

2. **Termination condition**
   Determines when the loop should stop.

3. **Increment / Decrement**
   Updates the loop variable after each iteration.

---

# Conceptual Flow

```text
start → check condition → run action → update → repeat
```

As long as the condition is true, the loop continues.

## Example 1: Python (Printing Hello World)

```python
for i in range(3):
    print("Hello, World")
```

### Explanation:

* The loop runs **3 times**
* `"Hello, World"` is printed on each iteration
* No need to repeat the `print` statement manually

## Example 2: JavaScript

```javascript
for (let i = 0; i < 3; i++) {
    console.log("Hello, World");
}
```

### Explanation:

* `let i = 0` → initial condition
* `i < 3` → termination condition
* `i++` → increment

The logic is identical to Python, only the syntax differs.

## Example 3: C Language

```c
for (int i = 0; i < 3; i++) {
    printf("Hello, World\n");
}
```

### Explanation:

* `int i = 0` → starting value
* `i < 3` → loop condition
* `i++` → increment after each iteration

---

# Key Takeaway from the Examples

Although Python, JavaScript, and C look different:

* they all use an **initial value**
* they all check a **condition**
* they all **update** the loop variable
* they all repeat an action automatically

The **concept of a for loop is universal**, even if the syntax changes.

---

# When to Use a For Loop

Use a for loop when:

* the number of repetitions is known
* you are iterating over a range or sequence
* repetition follows a clear pattern

If repetition depends on a condition that may change unpredictably, use a **while loop** instead.

---

# Summary

* A **for loop** repeats code a fixed number of times
* It consists of **initial condition**, **termination condition**, and **increment/decrement**
* The same idea applies across different programming languages
* Syntax may differ, but the logic stays the same
