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

## ⚙️ How to Use

1. **Clone the repo:** `git clone https://github.com/rambeto/cpp-matrix-algorithms.git`
2. **Open the Project:** Open any `.cpp` file in **Visual Studio** or **VS Code**.
3. **Compile & Run:** Use `g++` or the built-in compiler in your IDE.

---
*Created with ❤️ by Ramadan*
