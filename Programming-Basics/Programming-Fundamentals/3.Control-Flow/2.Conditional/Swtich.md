---
title: Switch
parent: Conditional
nav_order: 4
---

# Switch Statement

A **switch statement** is an alternative to long chains of `if – else if`.
It is used when a variable is compared against **many fixed values**.

---

# How Switch Works

Conceptually:

* A value is evaluated once
* The program jumps to the matching case
* Only the matching case is executed

## Example (JavaScript)

```javascript
let day = 3;

switch (day) {
  case 1:
    console.log("Monday");
    break;
  case 2:
    console.log("Tuesday");
    break;
  case 3:
    console.log("Wednesday");
    break;
  default:
    console.log("Unknown day");
}
```
# When to Use Switch

Use `switch` when:

* you compare one value against many options
* conditions are simple equality checks
* readability is important

Use `if – else if` when:

* conditions are complex
* comparisons involve ranges or logic

---

# Summary

* `switch` is an alternative to multiple `else if`
* It is cleaner for fixed-value comparisons
* Not available in all languages
