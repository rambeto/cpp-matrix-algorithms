# 🚀 C++ Mastery: 50 Essential Matrix Algorithms

This repository is a comprehensive collection of C++ programs focusing on **2D Arrays (Matrices)**, **Algorithm Logic**, and **Computational Problem-Solving**. 

---

## 📋 List of Challenges & Solutions

| # | Professional File Name | Description | Key Concept |
| :---: | :--- | :--- | :--- |
| 01 | `01_Matrix-Random-Filler.cpp` | Fill a 3x3 matrix with random numbers (1-100). | `Randomization` |
| 02 | `02_Matrix-Row-Sum.cpp` | Calculate and print the sum of each row individually. | `Row Traversal` |
| 03 | `03_Matrix-Row-Sum-Array.cpp` | Store each row's sum into a separate 1D array. | `Data Storage` |
| 04 | `04_Matrix-Col-Sum.cpp` | Calculate and print the sum of each column. | `Column Traversal` |
| 05 | `05_Matrix-Col-Sum-Array.cpp` | Store each column's sum into a separate 1D array. | `Abstraction` |
| 06 | `06_Matrix-Ordered-Filler.cpp` | Fill a matrix with ordered numbers (1 to 9). | `Sequential Loops` |
| 07 | `07_Matrix-Transpose.cpp` | Transpose a matrix (swap rows with columns). | `Transposition` |
| 08 | `08_Matrix-Multiplication.cpp` | Multiply two 3x3 matrices and display the result. | `Math Algorithms` |
| 09 | `09_Matrix-Middle-Display.cpp` | Extract and print the middle row and middle column. | `Indexing Logic` |
| 10 | `10_Matrix-Total-Sum.cpp` | Calculate the sum of all elements in the matrix. | `Accumulation` |
| 11 | `11_Matrix-Equality-Check.cpp` | Compares two matrices to check if they are identical. | `Boolean Logic` |
| 12 | `12_Matrix-Typical-Check.cpp` | Checks if two matrices are typical/similar. | `Validation` |
| 13 | `13_Matrix-Identity-Check.cpp` | Verifies if the matrix is an Identity Matrix. | `Diagonal Logic` |
| 14 | `14_Matrix-Scalar-Check.cpp` | Verifies if the matrix is a Scalar Matrix. | `Math Rules` |
| 15 | `15_Matrix-Frequency-Count.cpp` | Counts occurrences of a specific number in a matrix. | `Frequency Map` |
| 16 | `16_Matrix-Sparse-Check.cpp` | Checks if the matrix is a Sparse Matrix (mostly zeros). | `Data Density` |
| 17 | `17_Matrix-Number-Presence.cpp` | Checks if a specific number exists within the matrix. | `Search Logic` |
| 18 | `18_Matrix-Intersected-Numbers.cpp` | Finds the intersection of numbers between two matrices. | `Set Theory` |
| 19 | `19_Matrix-Min-Max-Finder.cpp` | Locates the minimum and maximum values in a matrix. | `Boundary Analysis` |
| 20 | `20_String-Palindrome-Check.cpp` | Checks if a string is a palindrome. | `String Logic` |
| 21 | `21_Math-Fibonacci-Sequence.cpp` | Generates the Fibonacci sequence up to N terms. | `Recursion/Loop` |
| 22 | `22_Math-Fibonacci-Recursion.cpp` | Implements Fibonacci sequence using recursion. | `Recursion` |
| 23 | `23_String-First-Letter-Printer.cpp` | Prints the first letter of each word in a string. | `String Parsing` |
| 24 | `24_String-Upper-First-Letter.cpp` | Capitalizes the first letter of each word. | `String Formatting` |
| 25 | `25_String-Lower-First-Letter.cpp` | Makes the first letter of each word lowercase. | `String Formatting` |
| 26 | `26_String-Invert-Case.cpp` | Inverts the case of all letters in a string. | `Case Manipulation` |
| 27 | `27_String-Inverted-Char.cpp` | Inverts the characters of a string. | `Reverse Logic` |
---

## 🔍 Featured Solutions (Detailed Breakdown 1-10)

#### 01. Matrix Random Filler (`01_Matrix-Random-Filler.cpp`)
* **Goal:** Automatically populate a 2D array with random values.
* **Logic:** Utilizes `srand(time(NULL))` for dynamic seeding and `rand() % range` to generate values.
* **Key Skill:** Mastering random number generation and visual formatting using `printf`.

#### 02. Matrix Row Sum (`02_Matrix-Row-Sum.cpp`)
* **Goal:** Calculate the total sum for each row independently.
* **Logic:** Uses a nested loop where the inner loop accumulates the sum of elements in a specific row.
* **Key Skill:** Understanding horizontal traversal in 2D data structures.

#### 03. Row Sum to Array (`03_Matrix-Row-Sum-Array.cpp`)
* **Goal:** Transfer row summation results into a separate 1D array.
* **Logic:** Instead of just printing, the sum is stored at `Array[i]` corresponding to `Row[i]`.
* **Key Skill:** Data transformation and managing multiple data structures simultaneously.

#### 04. Matrix Column Sum (`04_Matrix-Col-Sum.cpp`)
* **Goal:** Calculate the total sum for each column independently.
* **Logic:** Reverses the traversal logic by making the outer loop iterate through columns instead of rows.
* **Key Skill:** Mastering vertical traversal and index manipulation.

#### 05. Col Sum to Array (`05_Matrix-Col-Sum-Array.cpp`)
* **Goal:** Store column summation results into a separate 1D array for future use.
* **Logic:** Maps the accumulated column results into a dedicated array index.
* **Key Skill:** Abstracting data calculation from data display.

#### 06. Ordered Matrix Filler (`06_Matrix-Ordered-Filler.cpp`)
* **Goal:** Fill the matrix with sequential, ordered numbers (e.g., 1 to 9).
* **Logic:** Uses a counter variable that increments with every iteration of the nested loop.
* **Key Skill:** Implementing basic sequential patterns in 2D spaces.

#### 07. Matrix Transpose (`07_Matrix-Transpose.cpp`)
* **Goal:** Flip the matrix (Rows become Columns and vice versa).
* **Logic:** Mapping the element at `Matrix[i][j]` to a new matrix at position `Transposed[j][i]`.
* **Key Skill:** Advanced coordinate mapping and dimension flipping.

#### 08. Matrix Multiplication (`08_Matrix-Multiplication.cpp`)
* **Goal:** Perform mathematical multiplication between two 3x3 matrices.
* **Logic:** Uses the dot product principle (multiplying rows by columns) to generate a third result matrix.
* **Key Skill:** Implementing complex mathematical formulas into algorithmic code.

#### 09. Middle Row & Column (`09_Matrix-Middle-Display.cpp`)
* **Goal:** Extract and display only the center row and center column.
* **Logic:** Accessing specific fixed indices (e.g., `Row[1]` and `Col[1]` for a 3x3 matrix) dynamically.
* **Key Skill:** Precise data targeting and specific index retrieval.

#### 10. Matrix Total Sum (`10_Matrix-Total-Sum.cpp`)
* **Goal:** Compute the grand total of all elements within the matrix.
* **Logic:** A global accumulator variable sums every value during a full matrix traversal.
* **Key Skill:** Full-scale data aggregation and accumulation logic.

---
 ---

### 🔍 Featured Solutions (11-27)

#### Problem #11 (11_Matrix-Equality-Check.cpp)
* **Goal:** Determine if two matrices are identical in value.
* **Logic:** Iterates through both arrays comparing elements at the same `[i][j]` index; returns `false` upon the first mismatch.
* **Key Skill:** Nested loops, boolean logic, and early-exit conditions.

#### Problem #12 (12_Matrix-Typical-Check.cpp)
* **Goal:** Verify if two matrices are equivalent in structure and content.
* **Logic:** Performs a structural validation (dimensions) before conducting an element-wise content comparison.
* **Key Skill:** Validation logic and matrix traversal.

#### Problem #13 (13_Matrix-Identity-Check.cpp)
* **Goal:** Identify if a given matrix is an Identity Matrix.
* **Logic:** Checks if all diagonal elements (`i == j`) are 1 and all non-diagonal elements are 0.
* **Key Skill:** Diagonal indexing and conditional verification.

#### Problem #14 (14_Matrix-Scalar-Check.cpp)
* **Goal:** Determine if a matrix is a Scalar Matrix.
* **Logic:** Validates that all diagonal elements are equal and all non-diagonal elements are 0.
* **Key Skill:** Mathematical property validation.

#### Problem #15 (15_Matrix-Frequency-Count.cpp)
* **Goal:** Count occurrences of a specific integer within a matrix.
* **Logic:** Traverses the entire matrix, incrementing a counter variable whenever an element matches the target value.
* **Key Skill:** Data analysis and frequency mapping.

#### Problem #16 (16_Matrix-Sparse-Check.cpp)
* **Goal:** Determine if a matrix is a Sparse Matrix.
* **Logic:** Counts the ratio of zero elements to total elements to check if it exceeds a density threshold.
* **Key Skill:** Data density analysis.

#### Problem #17 (17_Matrix-Number-Presence.cpp)
* **Goal:** Check for the existence of a specific target number in a matrix.
* **Logic:** Performs a linear scan through the 2D array until the target is found.
* **Key Skill:** Searching algorithms.

#### Problem #18 (18_Matrix-Intersected-Numbers.cpp)
* **Goal:** Identify numbers common to two different matrices.
* **Logic:** Compares elements of the first matrix against all elements of the second matrix.
* **Key Skill:** Set theory implementation in arrays.

#### Problem #19 (19_Matrix-Min-Max-Finder.cpp)
* **Goal:** Retrieve the minimum and maximum values stored in a matrix.
* **Logic:** Initializes tracking variables and updates them dynamically during a single pass through the matrix.
* **Key Skill:** Boundary analysis and state management.

#### Problem #20 (20_String-Palindrome-Check.cpp)
* **Goal:** Determine if a string reads the same forward and backward.
* **Logic:** Compares characters at `index` and `length - 1 - index` simultaneously until the center is reached.
* **Key Skill:** Bidirectional string traversal.

#### Problem #21 (21_Math-Fibonacci-Sequence.cpp)
* **Goal:** Generate the Fibonacci sequence up to N terms iteratively.
* **Logic:** Uses a loop to maintain the state of the last two numbers to calculate the next sequence value.
* **Key Skill:** Iterative loop structures.

#### Problem #22 (22_Math-Fibonacci-Recursion.cpp)
* **Goal:** Generate a Fibonacci number using a recursive approach.
* **Logic:** Implements the function calling itself as `f(n) = f(n-1) + f(n-2)`.
* **Key Skill:** Recursion and call stack management.

#### Problem #23 (23_String-First-Letter-Printer.cpp)
* **Goal:** Isolate and display the first letter of every word in a string.
* **Logic:** Detects word boundaries by checking for space characters as delimiters.
* **Key Skill:** String parsing and delimiter-based logic.

#### Problem #24 (24_String-Upper-First-Letter.cpp)
* **Goal:** Capitalize the first letter of each word in a string.
* **Logic:** Identifies the start of words and applies `toupper()` to the character at those specific indices.
* **Key Skill:** String formatting and ASCII manipulation.

#### Problem #25 (25_String-Lower-First-Letter.cpp)
* **Goal:** Convert the first letter of each word to lowercase.
* **Logic:** Similar to capitalization, but uses `tolower()` on identified word starters.
* **Key Skill:** Character-level transformation.

#### Problem #26 (26_String-Invert-Case.cpp)
* **Goal:** Invert the case of every letter in a string.
* **Logic:** Iterates through the string, converting uppercase to lowercase and vice versa.
* **Key Skill:** Conditional text transformation.

#### Problem #27 (27_String-Inverted-Char.cpp)
* **Goal:** Reverse the order of characters in a string.
* **Logic:** Swaps characters from the beginning and end of the string until reaching the middle.
* **Key Skill:** String reversal algorithms and character swapping.

---

## ⚙️ How to Use

1. **Clone the repo:** `git clone https://github.com/rambeto/cpp-matrix-algorithms.git`
2. **Open the Project:** Open any `.cpp` file in **Visual Studio** or **VS Code**.
3. **Compile & Run:** Use `g++` or the built-in compiler in your IDE.

---
*Created with ❤️ by Ramadan*
