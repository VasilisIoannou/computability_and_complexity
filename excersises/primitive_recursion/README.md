## Overview

This repository contains mathematical proofs and computational simulations focused on the class of **Primitive Recursive Functions (PR)**. The project demonstrates how arithmetic operations and complex structures like bounded summations can be formally derived from a minimal set of basic functions and closure rules.

---

## Theory of Primitive Recursion

### 1. Initial (Basic) Functions

The foundation of the PR class relies on:

- **The Zero Function:** Z(x)=0
    
- **The Successor Function:** S(x)=x+1
    
- **The Predecessor Function:** P(x+1)=x (with P(0)=0)
    
- **The Projection Functions:** Uin​(x1​,…,xn​)=xi​
    

### 2. Closure Operations

New functions are admitted into PR if they are built via:

- **Composition:** h(x)=f(g1​(x),…,gm​(x))
    
- **Primitive Recursion:** * f(x,0)=g(x)
    
    - f(x,y+1)=h(x,y,f(x,y))
        

---

## Exercises & Proofs

### Exercise 1: Arithmetic Foundations

The following operations are formally proven to be primitive recursive:

- **Addition (add):** Proven by induction using the Successor and Projection functions.
    
- **Multiplication (mult):** Proven by building upon the previously defined add function.
    
- **Division (div):** Proven using **Bounded Summation**, proper subtraction, and the cosignum (sg​) function.
    

### Exercise 3: Bounded Summation Closure

A key proof showing that PR is closed under the bounded sum operator. If g(x,y)∈P, then the function f(x,z) defined as:

f(x,z)=y=0∑z​g(x,y)

is also in P. This is established by mapping the summation to the standard recursive schema:

- **Base Case:** f(x,0)=g(x,0)
    
- **Recursive Step:** f(x,z+1)=f(x,z)+g(x,z+1)
    

---

## Simulations in C

While the proofs provide the mathematical "why," this repository also includes **C programs** to simulate these models. These implementations demonstrate:

- How the basic functions (Z,S,U) translate into code.
    
- How the **Primitive Recursion Schema** can be implemented using iterative loops (akin to the **LOOP** language) to compute values for addition, multiplication, and division.
    
- Verification that the mathematical logic of the proofs holds true in a computational environment.
    

---
# Computational Models: LOOP Exercises

> [!TIP]
> **View the formatted document:** [![View PDF](https://img.shields.io/badge/PDF-View_Exercises-red?style=for-the-badge&logo=adobe-acrobat-reader)](./solutions.pdf)

