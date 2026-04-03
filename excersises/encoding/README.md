# Computational Models: Encoding Exercises

**Author:** Vasilis Ioannou  
**Topic:** Computability Theory, Primitive Recursive Functions, and Encoding mechanisms.

---

## 📌 Repo Overview
This repo explores the theoretical foundations of computation, focusing on:
1. **Cantor's Pairing Function:** Implementing encoding and decoding mechanisms using the **LOOP** language.
2. **Hyperoperation Sequences:** Transitioning from recursive definitions to closed-form expressions using Knuth's up-arrow notation.
3. **Language Expressivity:** Analyzing why specific subsets of high-level languages (like Pascal) are equivalent to the LOOP language and the class of Primitive Recursive (PR) functions.

---

## 1. Cantor's Encoding Function
Encoding allows us to map a pair of natural numbers $(m, n)$ to a single natural number $k$. 

### Formal Definition
Cantor's Function $C: \mathbb{N} \times \mathbb{N} \to \mathbb{N}$ is defined as:
$$C(m, n) = \frac{(m+n)(m+n+1)}{2} + n$$

To be a valid encoding, it must satisfy:
* $D_1(C(m, n)) = m$
* $D_2(C(m, n)) = n$
* $C(D_1(k), D_2(k)) = k$


# Computational Models: LOOP Exercises
> [!TIP]
> **View the formatted document:** [![View PDF](https://img.shields.io/badge/PDF-View_Exercises-red?style=for-the-badge&logo=adobe-acrobat-reader)](./solutions.pdf)
