This repository contains **10 fundamental C programming problems** that cover essential concepts, algorithms, and common programming pitfalls.

 Question 01:- 
 Array Sum |Timecomplexity :- O(n) |
 Question 02:- 
 Prime Number Check |Timecomplexity :- O(n) |
 Question 03:-
 Factorial (Recursion) |Timecomplexity :- O(n) |
 Question 04:- 
 Diamond Pattern |Timecomplexity :- O(n²) |
 Question 05:-
 Armstrong Numbers |Timecomplexity :- O(k×log n) |
 Question 06:-
 GCD & LCM |Timecomplexity :- O(log min(a,b)) 
 Question 07:-
 Decimal to Binary |Timecomplexity :- O(log n) |
 Question 08:-
 Matrix Multiplication |Timecomplexity :- O(n³) |
 Question 09:-
 Magic Square Validation |Timecomplexity :- O(n²) |
 Question 10:-
 Dangling Pointer & Macro|Timecomplexity :- O(1) |

---

## 🔍 Detailed Problem Analysis

### Question 01: Array Sum
**Problem:** Calculate the sum of all elements in an array.

**Logic:**
- Use iterative approach to traverse array
- Handle edge cases: empty array (n≤0) and single element (n=1)
- Accumulate sum using a loop

**Time Complexity:** O(n) - Linear traversal
**Space Complexity:** O(1) - Constant extra space

**Key Learning Points:**
- Array parameter passing in C
- Edge case handling
- Basic loop structures

---

### Question 02: Prime Number Check
**Problem:** Determine if a given number is prime.

**Logic:**
- Check divisibility from 2 to n
- Count total divisors
- Prime number has exactly one divisor in range [2,n] (itself)

**Time Complexity:** O(n) - Can be optimized to O(√n)
**Space Complexity:** O(1)

**Key Learning Points:**
- Prime number definition
- Loop-based counting logic
- Boolean return through integers
---

### Question 03: Factorial using Recursion
**Problem:** Calculate factorial of a number using recursive approach.

**Logic:**
- Base case: factorial(1) = 1
- Recursive case: n × factorial(n-1)

**Time Complexity:** O(n) - n recursive calls
**Space Complexity:** O(n) - Call stack depth

**Key Learning Points:**
- Recursion fundamentals
- Base case importance
- Stack overflow considerations for large n



---
### Question 04: Diamond Pattern
**Problem:** Print a diamond pattern using asterisks.

**Logic:**
- Upper half: Increasing stars with decreasing spaces
- Lower half: Decreasing stars with increasing spaces
- Stars formula: 2×i+1 for upper, 2×(n-i)-1 for lower

**Time Complexity:** O(n²) - Nested loops
**Space Complexity:** O(1) - No extra storage

**Key Learning Points:**
- Nested loop patterns
- Mathematical relationships in patterns
- Symmetrical structure design

---
### Question 05: Armstrong Numbers
**Problem:** Find all Armstrong numbers in a given range.

**Logic:**
- Armstrong number: Sum of digits raised to power of total digits equals original number
- Extract digits using modulo and division
- Calculate power sum and compare

**Time Complexity:** O(k×log n) where k is range size
**Space Complexity:** O(1)

**Key Learning Points:**
- Digit extraction techniques
- Power calculations
- Range-based validation
  
---
### Question 06: GCD and LCM using Euclidean Algorithm
**Problem:** Find Greatest Common Divisor and Least Common Multiple of two numbers.

**Logic:**
- GCD using Euclidean algorithm: gcd(a,b) = gcd(b%a, a)
- LCM formula: (a×b)/gcd(a,b)

**Time Complexity:** O(log min(a,b)) - Euclidean algorithm
**Space Complexity:** O(log min(a,b)) - Recursive calls

**Key Learning Points:**
- Euclidean algorithm efficiency
- Mathematical relationship between GCD and LCM
- Recursive number theory algorithms

---
### Question 07: Decimal to Binary Conversion
**Problem:** Convert decimal number to binary representation using arrays.

**Logic:**
- Repeatedly divide by 2, store remainders
- Reverse the order for correct binary representation
- Use array to store binary digits

**Time Complexity:** O(log n) - Number of divisions
**Space Complexity:** O(log n) - Array storage

**Key Learning Points:**
- Number base conversion
- Array manipulation
- Reverse order processing
  
---
### Question 08: Matrix Multiplication (3×3)
**Problem:** Multiply two 3×3 matrices.

**Logic:**
- Standard matrix multiplication: C[i][j] = Σ(A[i][k] × B[k][j])
- Triple nested loops for calculation
- Result matrix initialization to zero

**Time Complexity:** O(n³) - Three nested loops
**Space Complexity:** O(n²) - Result matrix storage

**Key Learning Points:**
- 2D array handling
- Matrix multiplication algorithm
- Nested loop optimization considerations

---
### Question 09: Magic Square Validation
**Problem:** Validate if a given matrix is a magic square.

**Logic:**
- Check if all numbers 1 to n² are present exactly once
- Verify all rows, columns, and diagonals have equal sums
- Magic constant for n×n square: n(n²+1)/2

**Time Complexity:** O(n²) - Matrix traversal
**Space Complexity:** O(n) - Tracking array for numbers

**Key Learning Points:**
- 2D array validation
- Multiple condition checking
- Mathematical properties of magic squares

---

### Question 10: Dangling Pointer and Macro Pitfalls
**Problem:** Demonstrate common C programming traps.

**Logic:**
- Dangling pointer: Returning address of local variable
- Macro expansion without parentheses causing unexpected results
- SQUARE(3+1) expands to 3+1*3+1 = 7, not 16

**Time Complexity:** O(1)
**Space Complexity:** O(1)

**Key Learning Points:**
- Memory management pitfalls
- Macro definition best practices
- Undefined behavior consequences

---
