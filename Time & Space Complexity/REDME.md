# ⏱️ Time and Space Complexity

Understanding **Time Complexity** and **Space Complexity** is one of the most important parts of Data Structures and Algorithms (DSA).

They help us understand how efficiently an algorithm uses:

* ⏱️ **Time** → How the number of operations grows as input size increases.
* 💾 **Space** → How much extra memory an algorithm requires.

> **Important:** Complexity does not tell us the exact execution time in seconds. It describes how the resource requirements **scale with input size `n`**.

---

## 📚 Table of Contents

* [1. What is Time Complexity?](#1-what-is-time-complexity)
* [2. What is Space Complexity?](#2-what-is-space-complexity)
* [3. Big O Notation](#3-big-o-notation)
* [4. O(1) — Constant](#4-o1--constant)
* [5. O(log n) — Logarithmic](#5-olog-n--logarithmic)
* [6. O(n) — Linear](#6-on--linear)
* [7. O(n log n) — Linearithmic](#7-on-log-n--linearithmic)
* [8. O(n²) — Quadratic](#8-on²--quadratic)
* [9. O(n³) — Cubic](#9-on³--cubic)
* [10. O(2ⁿ) — Exponential](#10-o2ⁿ--exponential)
* [11. O(n!) — Factorial](#11-on--factorial)
* [12. Complexity Comparison](#12-complexity-comparison)
* [13. Best, Average and Worst Case](#13-best-average-and-worst-case)
* [14. How to Calculate Time Complexity](#14-how-to-calculate-time-complexity)
* [15. Nested Loops](#15-nested-loops)
* [16. Different Inputs](#16-different-inputs)
* [17. Space Complexity](#17-space-complexity)
* [18. Auxiliary Space](#18-auxiliary-space)
* [19. Recursion and Space Complexity](#19-recursion-and-space-complexity)
* [20. Constraint-Based Analysis](#20-constraint-based-analysis)
* [21. Quick Complexity Cheat Sheet](#21-quick-complexity-cheat-sheet)

---

# 1. What is Time Complexity?

**Time Complexity** describes how the number of operations performed by an algorithm grows as the input size increases.

It is usually represented using **Big O notation**.

For example:

```cpp
for (int i = 0; i < n; i++) {
    cout << i << " ";
}
```

The loop executes `n` times.

Therefore:

```text
Time Complexity = O(n)
```

If:

```text
n = 10
```

the loop runs approximately 10 times.

If:

```text
n = 1,000
```

the loop runs approximately 1,000 times.

The workload grows linearly with `n`.

---

# 2. What is Space Complexity?

**Space Complexity** describes how much memory an algorithm requires as the input size increases.

Consider:

```cpp
int sum = 0;

for (int i = 0; i < n; i++) {
    sum += i;
}
```

Only a few variables are used regardless of `n`.

Therefore:

```text
Space Complexity = O(1)
```

Now consider:

```cpp
vector<int> arr(n);
```

The algorithm allocates memory proportional to `n`.

Therefore:

```text
Space Complexity = O(n)
```

---

# 3. Big O Notation

Big O notation describes the **asymptotic growth** of an algorithm.

Common complexities:

| Complexity   | Name         | Example            |
| ------------ | ------------ | ------------------ |
| `O(1)`       | Constant     | Array access       |
| `O(log n)`   | Logarithmic  | Binary Search      |
| `O(n)`       | Linear       | Linear Search      |
| `O(n log n)` | Linearithmic | Merge Sort         |
| `O(n²)`      | Quadratic    | Bubble Sort        |
| `O(n³)`      | Cubic        | Triple nested loop |
| `O(2ⁿ)`      | Exponential  | Subset generation  |
| `O(n!)`      | Factorial    | Permutations       |

### Complexity hierarchy

Generally, as `n` becomes large:

```text
O(1)
   ↓
O(log n)
   ↓
O(n)
   ↓
O(n log n)
   ↓
O(n²)
   ↓
O(n³)
   ↓
O(2ⁿ)
   ↓
O(n!)
```

Lower growth rates are generally more scalable.

---

# 4. O(1) — Constant

## Definition

An algorithm has `O(1)` time complexity when the number of operations does not depend on `n`.

### Example: Array Access

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    cout << arr[2];

    return 0;
}
```

Accessing:

```cpp
arr[2]
```

takes constant time.

### Complexity

```text
Time:  O(1)
Space: O(1)
```

### Another Example

```cpp
int getFirst(int arr[]) {
    return arr[0];
}
```

No matter whether the array contains:

```text
10 elements
```

or:

```text
10,000,000 elements
```

we only access one element.

```text
O(1)
```

---

# 5. O(log n) — Logarithmic

## Definition

An algorithm has logarithmic complexity when the problem size is reduced by a constant factor during each step.

The most common example is **Binary Search**.

### Example: Binary Search

```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {

    int left = 0;
    int right = n - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
```

Suppose:

```text
n = 16
```

Binary search checks approximately:

```text
16
 ↓
8
 ↓
4
 ↓
2
 ↓
1
```

So the number of steps is approximately:

```text
log₂(n)
```

### Complexity

```text
Time:  O(log n)
Space: O(1)
```

> Binary Search requires the data to be sorted.

---

# 6. O(n) — Linear

## Definition

An algorithm has `O(n)` complexity when the number of operations grows directly with `n`.

### Example: Linear Search

```cpp
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {

    for (int i = 0; i < n; i++) {

        if (arr[i] == target)
            return i;
    }

    return -1;
}
```

In the worst case, we may need to inspect every element.

For:

```text
n = 10
```

up to 10 elements may be checked.

For:

```text
n = 1000
```

up to 1000 elements may be checked.

### Complexity

```text
Time:  O(n)
Space: O(1)
```

---

# 7. O(n log n) — Linearithmic

`O(n log n)` is common in efficient sorting algorithms.

Examples:

* Merge Sort
* Heap Sort
* Average-case Quick Sort

## Example: Merge Sort

Merge Sort follows two major steps:

### Step 1 — Divide

The array is repeatedly divided into halves.

```text
n
 ↓
n/2
 ↓
n/4
 ↓
n/8
...
```

This produces approximately:

```text
log n
```

levels.

### Step 2 — Merge

At every level, approximately `n` elements are processed.

Therefore:

```text
n × log n
```

### Complexity

```text
Time:  O(n log n)
Space: O(n)
```

### Simple Example

```cpp
void mergeSort(vector<int>& arr, int left, int right) {

    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge two sorted halves
}
```

The recursion divides the problem into halves, while merging processes the elements.

---

# 8. O(n²) — Quadratic

## Definition

`O(n²)` commonly occurs when we have two nested loops, each depending on `n`.

### Example

```cpp
#include <iostream>
using namespace std;

int main() {

    int n = 5;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cout << i << " " << j << endl;
        }
    }

    return 0;
}
```

The outer loop runs:

```text
n times
```

The inner loop runs:

```text
n times
```

Therefore:

```text
n × n = n²
```

### Complexity

```text
Time:  O(n²)
Space: O(1)
```

---

## Example: Bubble Sort

```cpp
void bubbleSort(vector<int>& arr) {

    int n = arr.size();

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
```

### Complexity

```text
Time:  O(n²) worst/average
Space: O(1)
```

---

# 9. O(n³) — Cubic

Three nested loops generally produce `O(n³)` complexity.

### Example

```cpp
for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {

        for (int k = 0; k < n; k++) {

            cout << i << " "
                 << j << " "
                 << k << endl;
        }
    }
}
```

Operations:

```text
n × n × n
```

Therefore:

```text
O(n³)
```

### Complexity

```text
Time:  O(n³)
Space: O(1)
```

### Practical Example

A simple matrix multiplication algorithm uses three nested loops:

```cpp
for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {

        for (int k = 0; k < n; k++) {

            C[i][j] += A[i][k] * B[k][j];
        }
    }
}
```

```text
Time Complexity = O(n³)
```

---

# 10. O(2ⁿ) — Exponential

## Definition

Exponential algorithms grow extremely quickly as `n` increases.

A common example is generating all subsets of a set.

Every element has two possibilities:

```text
Include
Exclude
```

Therefore:

```text
2 × 2 × 2 × ... × 2
       n times

= 2ⁿ
```

---

## Example: Generate All Subsequences

```cpp
void generate(vector<int>& arr,
              int index,
              vector<int>& current) {

    if (index == arr.size()) {
        return;
    }

    // Include current element
    current.push_back(arr[index]);

    generate(arr, index + 1, current);

    current.pop_back();

    // Exclude current element
    generate(arr, index + 1, current);
}
```

Each element creates two branches.

Therefore:

```text
Time Complexity ≈ O(2ⁿ)
```

The recursion depth is `n`, so auxiliary recursion space is:

```text
O(n)
```

---

# 11. O(n!) — Factorial

Factorial complexity appears when we generate all possible permutations.

For `n` elements:

```text
Number of permutations = n!
```

For example:

```text
n = 3

[1,2,3]
[1,3,2]
[2,1,3]
[2,3,1]
[3,1,2]
[3,2,1]

Total = 3! = 6
```

For:

```text
n = 10
```

we get:

```text
10! = 3,628,800
```

---

## Example: Generate Permutations

```cpp
void permutations(vector<int>& arr, int index) {

    if (index == arr.size()) {
        // Process permutation
        return;
    }

    for (int i = index; i < arr.size(); i++) {

        swap(arr[index], arr[i]);

        permutations(arr, index + 1);

        swap(arr[index], arr[i]);
    }
}
```

### Complexity

Generating all permutations requires:

```text
O(n!)
```

permutations.

Depending on the work done for each permutation, the total can be:

```text
O(n × n!)
```

For example, if we copy/process every complete permutation, `O(n × n!)` is a common bound.

---

# 12. Complexity Comparison

Consider the following values:

```text
n = 10
n = 100
n = 1,000
n = 10,000
```

The growth is approximately:

| Complexity   |    n = 10 |         n = 100 |       n = 1,000 |
| ------------ | --------: | --------------: | --------------: |
| `O(1)`       |         1 |               1 |               1 |
| `O(log n)`   |        ~3 |              ~7 |             ~10 |
| `O(n)`       |        10 |             100 |           1,000 |
| `O(n log n)` |       ~33 |            ~664 |          ~9,966 |
| `O(n²)`      |       100 |          10,000 |       1,000,000 |
| `O(n³)`      |     1,000 |       1,000,000 |   1,000,000,000 |
| `O(2ⁿ)`      |     1,024 |      ~1.27×10³⁰ | Extremely large |
| `O(n!)`      | 3,628,800 | Extremely large | Extremely large |

This demonstrates why choosing the correct algorithm matters.

---

# 13. Best, Average and Worst Case

An algorithm can behave differently depending on the input.

There are three commonly discussed cases.

## Best Case

Minimum number of operations.

Example: Linear Search

```cpp
arr = {10, 20, 30, 40, 50}
target = 10
```

The target is found immediately.

```text
Best Case = O(1)
```

---

## Average Case

The expected amount of work over typical/random inputs under an assumed input distribution.

For Linear Search:

```text
Average Case = O(n)
```

---

## Worst Case

Maximum number of operations.

If the target is at the last position:

```cpp
arr = {10, 20, 30, 40, 50}
target = 50
```

we inspect all elements.

```text
Worst Case = O(n)
```

---

# 14. How to Calculate Time Complexity

## Rule 1 — Ignore Constants

Consider:

```cpp
for (int i = 0; i < n; i++) {
    cout << i;
}

for (int i = 0; i < n; i++) {
    cout << i;
}
```

Total:

```text
n + n = 2n
```

Big O ignores constant multipliers:

```text
O(2n) = O(n)
```

Therefore:

```text
Time Complexity = O(n)
```

---

## Rule 2 — Ignore Lower-Order Terms

Consider:

```text
n² + n + 10
```

For very large `n`, `n²` dominates.

Therefore:

```text
O(n² + n + 10)
= O(n²)
```

---

## Rule 3 — Sequential Loops Add

```cpp
for (int i = 0; i < n; i++) {
    // O(n)
}

for (int i = 0; i < n; i++) {
    // O(n)
}
```

Total:

```text
O(n) + O(n)
= O(2n)
= O(n)
```

---

## Rule 4 — Nested Loops Multiply

```cpp
for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {

        // O(1)
    }
}
```

Therefore:

```text
O(n × n)
= O(n²)
```

---

# 15. Nested Loops

Nested loops do not always mean `O(n²)`.

It depends on how the loop variables change.

## Example 1

```cpp
for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {

    }
}
```

Complexity:

```text
O(n²)
```

---

## Example 2

```cpp
for (int i = 0; i < n; i++) {

    for (int j = 0; j < 100; j++) {

    }
}
```

The inner loop always runs 100 times.

Therefore:

```text
100 × n
= O(n)
```

So:

```text
Time Complexity = O(n)
```

---

## Example 3

```cpp
for (int i = 1; i < n; i *= 2) {

    cout << i;
}
```

Values of `i`:

```text
1
2
4
8
16
32
...
```

The number of iterations is:

```text
log₂(n)
```

Therefore:

```text
O(log n)
```

---

# 16. Different Inputs

Suppose we have two independent input sizes:

```cpp
void example(vector<int>& a, vector<int>& b) {

    for (int x : a) {
        cout << x;
    }

    for (int y : b) {
        cout << y;
    }
}
```

Let:

```text
a = n elements
b = m elements
```

The first loop:

```text
O(n)
```

The second loop:

```text
O(m)
```

Therefore:

```text
Time Complexity = O(n + m)
```

---

## Nested Different Inputs

```cpp
for (int x : a) {

    for (int y : b) {

        cout << x << y;
    }
}
```

Complexity:

```text
O(n × m)
```

Therefore:

```text
Time Complexity = O(nm)
```

---

# 17. Space Complexity

Space complexity measures memory usage.

Consider:

```cpp
int sum = 0;

for (int i = 0; i < n; i++) {
    sum += i;
}
```

Only a fixed number of variables are used.

```text
Space Complexity = O(1)
```

---

## O(n) Space

```cpp
vector<int> result(n);
```

The vector contains `n` elements.

Therefore:

```text
Space Complexity = O(n)
```

---

## O(n²) Space

Consider an `n × n` matrix:

```cpp
vector<vector<int>> matrix(
    n,
    vector<int>(n)
);
```

Number of elements:

```text
n × n = n²
```

Therefore:

```text
Space Complexity = O(n²)
```

---

# 18. Auxiliary Space

**Auxiliary Space** means the extra memory used by an algorithm, excluding the memory required to store the input itself.

For example:

```cpp
void printArray(vector<int>& arr) {

    for (int x : arr) {
        cout << x;
    }
}
```

The input array already exists.

The algorithm does not create another data structure proportional to `n`.

Therefore:

```text
Auxiliary Space = O(1)
```

---

## Example: Extra Array

```cpp
vector<int> copy;

for (int x : arr) {
    copy.push_back(x);
}
```

The additional vector stores `n` elements.

Therefore:

```text
Auxiliary Space = O(n)
```

---

# 19. Recursion and Space Complexity

Recursion uses the **call stack**.

Consider:

```cpp
void countDown(int n) {

    if (n == 0)
        return;

    cout << n << endl;

    countDown(n - 1);
}
```

For:

```text
n = 5
```

the calls are:

```text
countDown(5)
    ↓
countDown(4)
    ↓
countDown(3)
    ↓
countDown(2)
    ↓
countDown(1)
    ↓
countDown(0)
```

Maximum recursion depth:

```text
n
```

Therefore:

```text
Time Complexity  = O(n)
Space Complexity = O(n)
```

The `O(n)` space comes from the recursion stack.

---

# 20. Constraint-Based Analysis

One of the most important DSA skills is choosing an algorithm based on the input constraints.

For example:

```text
n ≤ 10
```

An exponential algorithm may be possible.

But:

```text
n ≤ 100,000
```

An `O(n²)` algorithm is usually too expensive.

---

## Rough Rule of Thumb

A commonly used competitive-programming heuristic is to think in terms of roughly `10⁸` simple operations per second on a fast judge machine.

This is only an approximation.

Actual performance depends on:

* Programming language
* Hardware
* Compiler optimizations
* Operation cost
* Memory access
* Input/output
* Judge environment

So do not treat `10⁸` as a guaranteed limit.

---

## Example

Suppose:

```text
n = 100,000
```

An `O(n²)` algorithm performs roughly:

```text
100,000 × 100,000

= 10,000,000,000
```

operations.

That is approximately:

```text
10¹⁰ operations
```

This is generally too large for a typical time limit.

An `O(n log n)` solution would require roughly:

```text
100,000 × log₂(100,000)
≈ 1.66 × 10⁶
```

basic iterations at that level of approximation.

Therefore, we should look for a more efficient algorithm when the constraints require it.

---

# 21. Quick Complexity Cheat Sheet

| Complexity   | Name         | Common Examples                        |
| ------------ | ------------ | -------------------------------------- |
| `O(1)`       | Constant     | Array access, Hash lookup average case |
| `O(log n)`   | Logarithmic  | Binary Search                          |
| `O(n)`       | Linear       | Linear Search, Array Traversal         |
| `O(n log n)` | Linearithmic | Merge Sort, Heap Sort                  |
| `O(n²)`      | Quadratic    | Bubble Sort, Selection Sort            |
| `O(n³)`      | Cubic        | Naive Matrix Multiplication            |
| `O(2ⁿ)`      | Exponential  | Subset Generation                      |
| `O(n!)`      | Factorial    | Permutation Generation                 |

---

# 🧠 Important DSA Rules to Remember

### 1. Sequential loops → Add

```text
O(n) + O(n)
= O(n)
```

### 2. Nested loops → Usually multiply

```text
O(n) × O(n)
= O(n²)
```

### 3. Drop constants

```text
O(5n)
= O(n)
```

### 4. Drop lower-order terms

```text
O(n² + n)
= O(n²)
```

### 5. Halving the problem → Usually logarithmic

```text
n → n/2 → n/4 → n/8
```

```text
O(log n)
```

### 6. Every element has two choices → Often exponential

```text
2 × 2 × ... × 2
= O(2ⁿ)
```

### 7. All permutations → Factorial

```text
n!
```

### 8. Always check constraints

Before writing code, ask:

```text
What is n?
What is the expected complexity?
Will my algorithm finish within the time limit?
How much memory will it use?
```

---

# 🚀 Final Takeaway

When solving a DSA problem, don't only ask:

> "Does my code work?"

Also ask:

> "Will my code work efficiently when `n` becomes very large?"

A good solution should consider both:

```text
Time Complexity
        +
Space Complexity
        +
Input Constraints
        ↓
Efficient Algorithm
```

Understanding complexity will help you move from **brute-force solutions** to **optimized DSA solutions**.

---

## 📌 Complexity Formula Summary

```text
Constant       → O(1)

Logarithmic    → O(log n)

Linear         → O(n)

Linearithmic   → O(n log n)

Quadratic      → O(n²)

Cubic          → O(n³)

Exponential    → O(2ⁿ)

Factorial      → O(n!)
```


> **Remember:** Big O focuses on the growth rate of an algorithm as the input size becomes large.

