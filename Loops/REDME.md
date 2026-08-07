# C++ Loops Introduction

This repository contains a foundational example demonstrating how loops work in C++. A loop repeatedly executes a block of code until a specified condition becomes false.

## Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
    // A loop repeatedly executes a block of code until a condition becomes false.
    for (int i = 0; i < 5; i++) {
        cout << "Hello World" << endl;
    }

    return 0;
}
```

## How It Works
The code snippet initializes a standard `for` loop where an integer counter `i` starts at `0`. The loop prints `"Hello World"` to the console and increments `i` by `1` during each iteration. It repeats this process exactly **5 times**, terminating as soon as `i` reaches `5` and the evaluation condition (`i < 5`) becomes false.

## Types of Loops in C++
There are four primary loop structures available in C++:

* **for**: Best used when you know exactly how many times the code block should repeat.
* **while**: Repeats a statement while a given condition evaluates to true, checking the condition before executing the block.
* **do-while**: Similar to a `while` loop, but guarantees the block of code executes at least once before checking the condition.
* **Range-based for**: Simplifies iteration over arrays, vectors, and other standard containers without requiring a manual counter.

* | Loop     | Condition Checked | Executes At Least Once? |
| -------- | ----------------- | ----------------------- |
| for      | Before            | No                      |
| while    | Before            | No                      |
| do-while | After             | Yes                     |

