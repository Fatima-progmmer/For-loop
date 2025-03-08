# For Loop in C

## Overview
This repository contains an implementation and explanation of the **for loop** in the C programming language. The `for` loop is one of the most commonly used loops in C, allowing controlled iteration with initialization, condition checking, and increment/decrement in a single line.

## Key Features
- Demonstrates the syntax and working of the `for` loop.
- Provides example programs for better understanding.
- Helps beginners grasp the concept through practical implementation.

## Syntax
```c
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```

## Explanation
1. **Initialization**: The loop starts by initializing `i = 1`.
2. **Condition Checking**: It checks if `i <= 5`. If true, the loop body executes; otherwise, the loop terminates.
3. **Iteration Update**: The loop variable `i` is incremented after each iteration.

## Example Output
```
1
2
3
4
5
```

## How to Run the Code
1. Clone the repository:
   ```sh
   git clone https://github.com/Fatima-progmmer/For-loop
   ```
2. Navigate to the project folder:
   ```sh
   cd For-loop
   ```
3. Compile the program using GCC:
   ```sh
   gcc for_loop_example.c -o for_loop_example
   ```
4. Run the executable:
   ```sh
   ./for_loop_example
   ```

## Contribution
Feel free to contribute by adding more examples, improving documentation, or optimizing the code. Fork the repository and create a pull request with your changes.

## License
This project is open-source and available under the **MIT License**.

---
### Author: Tanzeela Fatima
For more projects and contributions, visit my [GitHub Profile](https://github.com/Fatima-progmmer).
