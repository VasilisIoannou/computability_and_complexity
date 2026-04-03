# Computational Models: LOOP Exercises

This repository contains formal definitions and algorithmic implementations within the **LOOP programming model**. The project explores the boundaries of **Primitive Recursive Functions** and demonstrates how complex arithmetic operations (like division, combinations, and square roots) can be constructed using only bounded iteration.

##  Project Overview

The LOOP model is a formal language where every program is guaranteed to terminate. This project serves as a technical deep-dive into:
* The formal syntax and semantics of LOOP programs.
* The relationship between LOOP and the **Ackermann Function** (The "While" Gap).
* Step-by-step construction of arithmetic functions using only basic increments and fixed loops.

---

##  Implemented Functions

The following functions are implemented in the `LOOP` language within the document:

### Basic Arithmetic
* **Assign ($x := y$):** Copying values between variables.
* **Multiplication ($\text{mult}$):** Using nested loops to perform $x \times y$.
* **Subtraction ($\text{sub}$):** Implementing "monus" (limited subtraction) using predecessor logic.
* **If-Zero ($\text{ifzero}$):** A logical check that returns $1$ if $x=0$, else $0$.

### Complex Logic & Math
* **Conditional Branching:** Simulating `if g(x) = 0 then h1(x) else h2(x)` using only loops.
* **Integer Division ($\text{div}$):** Repeated subtraction logic with termination safety.
* **Combinatorics:** Power ($x^y$), Factorial ($n!$), and Combinations ($\binom{n}{k}$).
* **Integer Square Root ($\sqrt{x}$):** Finding the largest $i$ such that $i^2 \leq x$ using bounded search.

---

##  Theoretical Background

### The LOOP Model vs. WHILE Model
One of the core focuses of this project is the **"While" Gap**. 
* **LOOP programs** characterize the class of primitive recursive functions.
* **The Ackermann Function** is used as a proof that some computable functions are *not* primitive recursive, as its growth rate exceeds the capacity of any LOOP program.

$$
A(m, n) = 
\begin{cases} 
n + 1 & \text{if } m = 0 \\
A(m-1, 1) & \text{if } m > 0 \text{ and } n = 0 \\
A(m-1, A(m, n-1)) & \text{if } m > 0 \text{ and } n > 0 
\end{cases}
$$

---
# Computational Models: LOOP Exercises


