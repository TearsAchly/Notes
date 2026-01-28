---
title: While Loop
parent: Loop
nav_order: 3
---

# [While Loop]()

A **while loop** is a type of loop that repeatedly executes a block of code **as long as a condition is true**.  
Before each iteration, the condition is checked first.   
If the condition is still true, the code inside the loop will run again.   
If the condition becomes false, the loop stops.

---

# How a While Loop Works

In general, a while loop consists of three main parts:

1. **Initialization**
   A starting value, usually defined **before** the loop begins.

2. **Condition (termination condition)**
   A logical expression checked **before each iteration**.

3. **Update (increment or decrement)**
   A change to the variable so the loop can eventually stop.

---

# Execution Flow

The flow of a while loop looks like this:

1. Check the condition
2. If the condition is true → execute the loop body
3. Update the variable
4. Go back to step 1

This process repeats until the condition becomes false.

## Example 1: Simple Counter

```python
count = 0

while count < 5:
    print(count)
    count += 1
```

**Explanation:**

* `count = 0` → initialization
* `count < 5` → condition
* `count += 1` → increment
* The loop prints numbers from `0` to `4`



## Example 2: Loop Until User Input Is Correct

```python
password = ""

while password != "secret":
    password = input("Enter password: ")

print("Access granted")
```

**Explanation:**

* The loop continues while the password is incorrect
* The loop stops when the correct value is entered
* Useful when the number of attempts is unknown


## Example 3: Decreasing Loop (Countdown)

```python
timer = 5

while timer > 0:
    print(timer)
    timer -= 1

print("Time's up!")
```

**Explanation:**

* `timer = 5` → initialization
* `timer > 0` → condition
* `timer -= 1` → decrement
* The loop runs until `timer` reaches `0`

## Common Mistake: Infinite Loop

```python
x = 0

while x < 3:
    print(x)
```

This loop never stops because `x` is never updated.

---

# Important Notes

* The condition must eventually become false
* If the variable is never updated, the loop may run **forever**
* This situation is called an **infinite loop**

---

# When to Use a While Loop

A while loop is useful when:

* the number of repetitions is **not known in advance**
* the loop should run until a certain condition is met

---

## In Short

* A **while loop** repeats code while a condition is true
* The condition is checked **before** each iteration
* Proper initialization and updates are required to stop the loop

Understanding the while loop helps you control program repetition safely and effectively.
