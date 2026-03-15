# 🚀 C++ Mastery: 50 Essential Matrix Algorithms

![C++](https://img.shields.io/badge/Language-C++-blue)
![Status](https://img.shields.io/badge/Status-Completed-green)

This repository is a **comprehensive collection of C++ programs** focusing on **2D Arrays (Matrices)**, **Algorithm Logic**, and **Computational Problem-Solving**.

---

## 📋 List of Challenges & Solutions (1-27)

| #  | File Name | Description | Key Concept |
|----|-----------|-------------|-------------|
| 01 | [01_Matrix-Random-Filler.cpp](./01_Matrix-Random-Filler.cpp) | Fill a 3x3 matrix with random numbers (1-100). | Randomization |
| 02 | [02_Matrix-Row-Sum.cpp](./02_Matrix-Row-Sum.cpp) | Calculate and print the sum of each row individually. | Row Traversal |
| 03 | [03_Matrix-Row-Sum-Array.cpp](./03_Matrix-Row-Sum-Array.cpp) | Store each row's sum into a separate 1D array. | Data Storage |
| 04 | [04_Matrix-Col-Sum.cpp](./04_Matrix-Col-Sum.cpp) | Calculate and print the sum of each column. | Column Traversal |
| 05 | [05_Matrix-Col-Sum-Array.cpp](./05_Matrix-Col-Sum-Array.cpp) | Store each column's sum into a separate 1D array. | Abstraction |
| 06 | [06_Matrix-Ordered-Filler.cpp](./06_Matrix-Ordered-Filler.cpp) | Fill a matrix with ordered numbers (1 to 9). | Sequential Loops |
| 07 | [07_Matrix-Transpose.cpp](./07_Matrix-Transpose.cpp) | Transpose a matrix (swap rows with columns). | Transposition |
| 08 | [08_Matrix-Multiplication.cpp](./08_Matrix-Multiplication.cpp) | Multiply two 3x3 matrices and display the result. | Math Algorithms |
| 09 | [09_Matrix-Middle-Display.cpp](./09_Matrix-Middle-Display.cpp) | Extract and print the middle row and middle column. | Indexing Logic |
| 10 | [10_Matrix-Total-Sum.cpp](./10_Matrix-Total-Sum.cpp) | Calculate the sum of all elements in the matrix. | Accumulation |
| 11 | [11_Matrix-Equality-Check.cpp](./11_Matrix-Equality-Check.cpp) | Compares two matrices to check if they are identical. | Boolean Logic |
| 12 | [12_Matrix-Typical-Check.cpp](./12_Matrix-Typical-Check.cpp) | Checks if two matrices are typical/similar. | Validation |
| 13 | [13_Matrix-Identity-Check.cpp](./13_Matrix-Identity-Check.cpp) | Verifies if the matrix is an Identity Matrix. | Diagonal Logic |
| 14 | [14_Matrix-Scalar-Check.cpp](./14_Matrix-Scalar-Check.cpp) | Verifies if the matrix is a Scalar Matrix. | Math Rules |
| 15 | [15_Matrix-Frequency-Count.cpp](./15_Matrix-Frequency-Count.cpp) | Counts occurrences of a specific number in a matrix. | Frequency Map |
| 16 | [16_Matrix-Sparse-Check.cpp](./16_Matrix-Sparse-Check.cpp) | Checks if the matrix is a Sparse Matrix (mostly zeros). | Data Density |
| 17 | [17_Matrix-Number-Presence.cpp](./17_Matrix-Number-Presence.cpp) | Checks if a specific number exists within the matrix. | Search Logic |
| 18 | [18_Matrix-Intersected-Numbers.cpp](./18_Matrix-Intersected-Numbers.cpp) | Finds the intersection of numbers between two matrices. | Set Theory |
| 19 | [19_Matrix-Min-Max-Finder.cpp](./19_Matrix-Min-Max-Finder.cpp) | Locates the minimum and maximum values in a matrix. | Boundary Analysis |
| 20 | [20_String-Palindrome-Check.cpp](./20_String-Palindrome-Check.cpp) | Checks if a string is a palindrome. | String Logic |
| 21 | [21_Math-Fibonacci-Sequence.cpp](./21_Math-Fibonacci-Sequence.cpp) | Generates the Fibonacci sequence up to N terms. | Iterative Loops |
| 22 | [22_Math-Fibonacci-Recursion.cpp](./22_Math-Fibonacci-Recursion.cpp) | Implements Fibonacci sequence using recursion. | Recursion |
| 23 | [23_String-First-Letter-Printer.cpp](./23_String-First-Letter-Printer.cpp) | Prints the first letter of each word in a string. | String Parsing |
| 24 | [24_String-Upper-First-Letter.cpp](./24_String-Upper-First-Letter.cpp) | Capitalizes the first letter of each word. | String Formatting |
| 25 | [25_String-Lower-First-Letter.cpp](./25_String-Lower-First-Letter.cpp) | Makes the first letter of each word lowercase. | String Formatting |
| 26 | [26_String-Invert-Case.cpp](./26_String-Invert-Case.cpp) | Inverts the case of all letters in a string. | Case Manipulation |
| 27 | [27_String-Inverted-Char.cpp](./27_String-Inverted-Char.cpp) | Inverts the characters of a string. | Reverse Logic |

---

## 🔍 Featured Solutions (1-27)

### 01. Matrix Random Filler (01_Matrix-Random-Filler.cpp)
- **Goal:** Populate a 2D array with random values (1-100).  
- **Logic:** Uses `srand(time(NULL))` to seed the random generator and `rand() % 100 + 1` to fill each element.  
- **Key Skill:** Mastering random number generation and matrix traversal.

### 02. Matrix Row Sum (02_Matrix-Row-Sum.cpp)
- **Goal:** Calculate the total sum for each row independently.  
- **Logic:** Uses a nested loop where the inner loop accumulates the sum of elements in a specific row.  
- **Key Skill:** Understanding horizontal traversal in 2D data structures.

### 03. Row Sum to Array (03_Matrix-Row-Sum-Array.cpp)
- **Goal:** Store row summation results into a separate 1D array.  
- **Logic:** Maps the sum of each row into `Array[i]` corresponding to `Row[i]`.  
- **Key Skill:** Data transformation and managing multiple data structures.

### 04. Matrix Column Sum (04_Matrix-Col-Sum.cpp)
- **Goal:** Calculate the total sum for each column independently.  
- **Logic:** Outer loop iterates through columns; inner loop accumulates column elements.  
- **Key Skill:** Vertical traversal and index management.

### 05. Column Sum to Array (05_Matrix-Col-Sum-Array.cpp)
- **Goal:** Store column summation results into a separate 1D array.  
- **Logic:** Maps accumulated column sums into dedicated array indices.  
- **Key Skill:** Abstraction of computation from display.

### 06. Ordered Matrix Filler (06_Matrix-Ordered-Filler.cpp)
- **Goal:** Fill matrix with sequential numbers (1 → 9).  
- **Logic:** Counter variable increments with each nested loop iteration.  
- **Key Skill:** Sequential patterns in 2D arrays.

### 07. Matrix Transpose (07_Matrix-Transpose.cpp)
- **Goal:** Flip rows into columns (transpose).  
- **Logic:** Map element `Matrix[i][j]` to `Transposed[j][i]`.  
- **Key Skill:** Coordinate mapping and dimension flipping.

### 08. Matrix Multiplication (08_Matrix-Multiplication.cpp)
- **Goal:** Multiply two 3x3 matrices.  
- **Logic:** Uses dot product principle: row × column for each element.  
- **Key Skill:** Implementing mathematical formulas programmatically.

### 09. Middle Row & Column (09_Matrix-Middle-Display.cpp)
- **Goal:** Extract and print the middle row and column.  
- **Logic:** Access fixed indices (e.g., `Row[1]`, `Col[1]`) dynamically.  
- **Key Skill:** Precise indexing and targeted data retrieval.

### 10. Matrix Total Sum (10_Matrix-Total-Sum.cpp)
- **Goal:** Calculate the sum of all elements in the matrix.  
- **Logic:** Single accumulator variable adds each value during full traversal.  
- **Key Skill:** Full-scale data aggregation.

### 11. Matrix Equality Check (11_Matrix-Equality-Check.cpp)
- **Goal:** Check if two matrices are identical.  
- **Logic:** Compare corresponding elements; return false on first mismatch.  
- **Key Skill:** Nested loops, boolean logic, early exit.

### 12. Matrix Typical Check (12_Matrix-Typical-Check.cpp)
- **Goal:** Verify structural and value equivalence of two matrices.  
- **Logic:** Validate dimensions first, then perform element-wise comparison.  
- **Key Skill:** Matrix validation and traversal.

### 13. Identity Matrix Check (13_Matrix-Identity-Check.cpp)
- **Goal:** Determine if a matrix is an Identity Matrix.  
- **Logic:** Diagonal elements must be 1; others must be 0.  
- **Key Skill:** Diagonal indexing and conditional checks.

### 14. Scalar Matrix Check (14_Matrix-Scalar-Check.cpp)
- **Goal:** Verify a Scalar Matrix.  
- **Logic:** All diagonal elements equal; non-diagonal elements are 0.  
- **Key Skill:** Mathematical property verification.

### 15. Frequency Count (15_Matrix-Frequency-Count.cpp)
- **Goal:** Count occurrences of a number in the matrix.  
- **Logic:** Traverse matrix, increment counter on matches.  
- **Key Skill:** Data analysis and frequency mapping.

### 16. Sparse Matrix Check (16_Matrix-Sparse-Check.cpp)
- **Goal:** Determine if a matrix is sparse.  
- **Logic:** Count zeros; compare ratio to threshold.  
- **Key Skill:** Data density evaluation.

### 17. Number Presence (17_Matrix-Number-Presence.cpp)
- **Goal:** Check if a number exists in the matrix.  
- **Logic:** Linear scan until the number is found.  
- **Key Skill:** Searching in 2D arrays.

### 18. Intersected Numbers (18_Matrix-Intersected-Numbers.cpp)
- **Goal:** Find common numbers between two matrices.  
- **Logic:** Compare each element of first matrix against all of the second.  
- **Key Skill:** Set theory implementation.

### 19. Min-Max Finder (19_Matrix-Min-Max-Finder.cpp)
- **Goal:** Find minimum and maximum values in matrix.  
- **Logic:** Initialize min/max, update during a single traversal.  
- **Key Skill:** Boundary analysis and state tracking.

### 20. Palindrome Check (20_String-Palindrome-Check.cpp)
- **Goal:** Check if string reads the same forwards/backwards.  
- **Logic:** Compare `index` vs `length - 1 - index` until center.  
- **Key Skill:** Bidirectional string traversal.

### 21. Fibonacci Sequence (21_Math-Fibonacci-Sequence.cpp)
- **Goal:** Generate Fibonacci sequence iteratively.  
- **Logic:** Loop maintains last two numbers to compute next.  
- **Key Skill:** Iterative sequences.

### 22. Fibonacci Recursion (22_Math-Fibonacci-Recursion.cpp)
- **Goal:** Generate Fibonacci number recursively.  
- **Logic:** `f(n) = f(n-1) + f(n-2)`; function calls itself.  
- **Key Skill:** Recursion and stack management.

### 23. First Letter Printer (23_String-First-Letter-Printer.cpp)
- **Goal:** Print first letter of each word.  
- **Logic:** Detect spaces; print letter after each space.  
- **Key Skill:** String parsing and word boundary detection.

### 24. Uppercase First Letter (24_String-Upper-First-Letter.cpp)
- **Goal:** Capitalize first letter of each word.  
- **Logic:** Detect word start; apply `toupper()`.  
- **Key Skill:** String formatting and ASCII manipulation.

### 25. Lowercase First Letter (25_String-Lower-First-Letter.cpp)
- **Goal:** Make first letter of each word lowercase.  
- **Logic:** Detect word start; apply `tolower()`.  
- **Key Skill:** Character-level transformation.

### 26. Invert Case (26_String-Invert-Case.cpp)
- **Goal:** Invert the case of all letters.  
- **Logic:** Iterate string; swap uppercase↔lowercase.  
- **Key Skill:** Conditional character transformation.

### 27. Invert Characters (27_String-Inverted-Char.cpp)
- **Goal:** Reverse characters in a string.  
- **Logic:** Swap start/end characters until reaching the middle.  
- **Key Skill:** String reversal algorithms.

---

## ⚙️ How to Use

1. **Clone the repository:**  
```bash
git clone https://github.com/rambeto/cpp-matrix-algorithms.git
