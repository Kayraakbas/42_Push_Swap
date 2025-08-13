# Push Swap — Efficient Stack Sorting Algorithm

## Project Overview
`push_swap` is an educational project that implements a sorting algorithm using two stacks and a limited set of operations.  
The goal is to sort a list of integers with the minimum number of moves, following the constraints defined by the **42 School** curriculum.  

This project focuses on algorithmic thinking, data structure manipulation, and efficient C programming.  
It is an excellent exercise in optimizing performance within strict rules, providing a solid foundation for more complex algorithmic challenges.

---

## Features
- Sorts integers using only allowed stack operations (`push`, `swap`, `rotate`, `reverse rotate`).
- Handles input parsing, validation, and error management.
- Detects and rejects duplicate values.
- Optimized for both small and large input sizes.
- Includes custom implementations of utility functions (`libft`) and formatted output (`ft_printf`).
- Modular and maintainable code structure.

---

## Tech Stack
- **Programming Language:** C  
- **Build Tool:** Makefile  
- **Custom Libraries:**  
  - [`libft`](../libft) — Custom standard library functions  
  - `ft_printf` — Custom printf implementation  

---

## Architecture
The project is organized into the following components:

- **Core Files:**
  - `push_swap.c` — Main program logic and entry point  
  - `index.c`, `radix_sort.c` — Sorting and indexing logic  
  - `push_rules.c`, `swap_rules.c`, `rotate_rules.c`, `reverse_rotate_rules.c` — Stack operation implementations  
  - `linked_list_utils.c`, `utils.c` — Linked list and helper functions  

- **Libraries:**
  - `libft` — Utility functions  
  - `ft_printf` — Formatted output

- **Header File:**
  - `push_swap.h` — Project-wide type and function declarations

---

## Installation & Setup

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Kayraakbas/42_Push_Swap.git
   cd 42_Push_Swap


2. **Build the project:**

   ```bash
   make
   ```

   This compiles the main program and required libraries.

---

## Usage

Run the program with a list of integers as arguments:

```bash
./push_swap 3 2 1 6 5 4
```

Or pass them as a quoted string:

```bash
./push_swap "3 2 1 6 5 4"
```

The program outputs the sequence of stack operations needed to sort the list.

---

## Core Functions

### Main Functions

* `sort_stack(t_node **stack_a, t_node **stack_b)` — Orchestrates the sorting process
* `radix_sort(t_node **stack_a, t_node **stack_b)` — Radix sort for large inputs
* Stack Operations:

  * `swap_a`, `swap_b`
  * `push_a`, `push_b`
  * `rotate_a`, `rotate_b`
  * `reverse_rotate_a`, `reverse_rotate_b`

### Utility Functions

* `check_duplicates` — Validates that input contains no duplicates
* `index_stack` — Assigns index values to stack elements
* `ft_lstsize` — Counts elements in a list
* `sorted` — Checks if stack is sorted

---

## Build Commands

* **make**
  Compiles the project and generates the `push_swap` executable.

* **make re**
  Cleans all object files and the binary, then recompiles everything from scratch.

* **make fclean**
  Removes all object files and the `push_swap` binary.

---

## Testing

1. Compile the program:

   ```bash
   make
   ```

2. Run manual tests with different integer sequences and verify the output.

3. Example test framework: [Push Swap Tester](https://github.com/LeoFu9487/push_swap_tester)

---

## Configuration

No external configuration is required. The project is self-contained and portable.
Modify the **Makefile** to adjust compiler flags or library paths if necessary.

---

## Contributing

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/your-feature`).
3. Commit your changes.
4. Push to your fork and open a pull request with a detailed description.

---

## License

This project is licensed under the MIT License.
See the [LICENSE](LICENSE) file for details.

---

## Credits / Acknowledgements

* Developed as part of the **42 School** curriculum.

🔗 **GitHub Repository:** [Push Swap](https://github.com/Kayraakbas/42_Push_Swap)
