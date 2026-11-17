# C++ Basics Workbook

A hands-on collection of **100 short, self-contained C++ programs** that walk through the core of the language: output, variables, operators, decisions, loops, number puzzles, console patterns, functions, scope and pointers. Each file is a single `main` (plus a few small helpers), compiles on its own, and is meant to be read, run and then tweaked.

Everything here is plain standard C++: no libraries to install, no external services, nothing that needs a network connection.

## Contents

- [Quick start](#quick-start)
- [How the files are organised](#how-the-files-are-organised)
- [Topic map](#topic-map)
- [Full index](#full-index)
- [Conventions](#conventions)
- [Experiments to try](#experiments-to-try)

## Quick start

You need a C++17 compiler (GCC, Clang or MSVC) and, optionally, `make`.

**Compile and run a single program**

```bash
g++ -std=c++17 -Wall -Wextra src/001_for_loop_steps.cpp -o demo
./demo
```

**Programs that read input** (51 of the 100) wait on standard input, so you can type the values or pipe them in:

```bash
g++ -std=c++17 src/003_floyds_triangle.cpp -o demo
printf '5\n' | ./demo
```

**Build everything with `make`**

```bash
make                         # compile every program into ./build
make run-001_for_loop_steps   # build and run one program
make list                    # print all program names
make clean                   # remove ./build
```

## How the files are organised

All sources live in a single flat folder, `src/`. Their numbers were assigned by a **seeded random shuffle**, so the numeric prefix (`001_`, `002_`, ...) is just a label and says nothing about difficulty or topic. That makes the list a good pool for random practice: pick a number, open the file, and predict its output before you run it.

If you would rather study in a sensible order, use the [Topic map](#topic-map) below, which regroups the same files by subject and lists them from first idea to last.

## Topic map

| Topic | Programs | What you practise |
|---|---|---|
| [Getting started](#getting-started) | 3 | Printing text and values, comments, escape sequences |
| [Variables & data types](#variables--data-types) | 5 | Declaring variables, naming, `char`, `bool`, ASCII codes |
| [Operators](#operators) | 10 | Arithmetic, remainder, precedence, compound assignment, `++`/`--`, comparisons |
| [Decision making](#decision-making) | 14 | `if`/`else`, logical AND/OR, `switch`, the conditional operator |
| [Loops](#loops) | 17 | `for`, `while`, `do-while`, `continue`, `break`, nested loops, sequences |
| [Number crunching](#number-crunching) | 11 | Digit tricks, factors, primes, factorial, combinations, swapping, geometry |
| [Patterns](#patterns) | 24 | Nested loops that draw stars, numbers and letters |
| [Functions](#functions) | 8 | Parameters, return values, pass-by-value / by-reference, library helpers |
| [Scope](#scope) | 5 | Global, local, block and loop scope, shadowing |
| [Pointers & references](#pointers--references) | 3 | Addresses, pointers and dereferencing |

### Getting started

- [`083_hello_output.cpp`](src/083_hello_output.cpp) — cout basics: escape sequences, endl and chained insertions.
- [`076_text_versus_value.cpp`](src/076_text_versus_value.cpp) — Quotes print text literally; without quotes the expression is evaluated.
- [`005_escape_sequences.cpp`](src/005_escape_sequences.cpp) — Printing quotes, tabs and backslashes with escape sequences.

### Variables & data types

- [`021_declare_and_assign.cpp`](src/021_declare_and_assign.cpp) — Declaring, assigning and combining variables.
- [`024_naming_rules.cpp`](src/024_naming_rules.cpp) — What makes a legal identifier (the illegal ones are left commented out).
- [`045_char_type.cpp`](src/045_char_type.cpp) — The char type: letters, symbols and digit characters.
- [`002_bool_type.cpp`](src/002_bool_type.cpp) — Any non-zero value converts to true; zero converts to false.
- [`040_ascii_codes.cpp`](src/040_ascii_codes.cpp) — Characters are small integers; implicit and explicit conversion.

### Operators

- [`009_integer_arithmetic.cpp`](src/009_integer_arithmetic.cpp) — +, -, * and / on integers (division truncates).
- [`066_real_arithmetic.cpp`](src/066_real_arithmetic.cpp) — The same four operators on doubles.
- [`081_division_kinds.cpp`](src/081_division_kinds.cpp) — Integer division versus floating-point division.
- [`064_modulo.cpp`](src/064_modulo.cpp) — The remainder operator, including negative operands.
- [`078_precedence.cpp`](src/078_precedence.cpp) — Operator precedence and why parentheses matter.
- [`095_update_long_form.cpp`](src/095_update_long_form.cpp) — Updating a variable by re-assigning it to itself.
- [`080_compound_assignment.cpp`](src/080_compound_assignment.cpp) — -=, +=, *= and /= as shorthand for the long form.
- [`100_increment_decrement.cpp`](src/100_increment_decrement.cpp) — Prefix and postfix ++ and -- as standalone statements.
- [`034_post_versus_pre.cpp`](src/034_post_versus_pre.cpp) — How prefix and postfix differ when the result is used.
- [`016_relational_operators.cpp`](src/016_relational_operators.cpp) — Comparison operators yield 1 (true) or 0 (false).

### Decision making

- [`061_absolute_value.cpp`](src/061_absolute_value.cpp) — Absolute value with a plain if/else.
- [`052_even_or_odd.cpp`](src/052_even_or_odd.cpp) — Parity check using the remainder operator.
- [`014_divisible_by_5_or_3.cpp`](src/014_divisible_by_5_or_3.cpp) — Combining conditions with the logical OR operator.
- [`008_four_digit_check.cpp`](src/008_four_digit_check.cpp) — Range test with the logical AND operator.
- [`013_whole_number_check.cpp`](src/013_whole_number_check.cpp) — Decide whether a real number has a fractional part.
- [`025_largest_of_three.cpp`](src/025_largest_of_three.cpp) — Nested conditions, and the same idea written with a helper.
- [`044_grade_from_marks.cpp`](src/044_grade_from_marks.cpp) — Grade bands written as nested if/else and as an else-if ladder.
- [`073_profit_or_loss.cpp`](src/073_profit_or_loss.cpp) — Compare cost price with selling price.
- [`046_triangle_validity.cpp`](src/046_triangle_validity.cpp) — A triangle exists only if every pair of sides beats the third.
- [`094_multiples_of_3_and_5.cpp`](src/094_multiples_of_3_and_5.cpp) — Four-way branching on divisibility by 3 and 5.
- [`059_weekday_switch.cpp`](src/059_weekday_switch.cpp) — Map 1-7 to a weekday name with switch/case.
- [`084_ternary_even_odd.cpp`](src/084_ternary_even_odd.cpp) — The conditional operator used inside an output statement.
- [`041_ternary_into_variable.cpp`](src/041_ternary_into_variable.cpp) — Storing the result of a conditional expression in a variable.
- [`071_expressions_in_conditions.cpp`](src/071_expressions_in_conditions.cpp) — Any expression can be a condition: assignments, side effects, literals.

### Loops

- [`035_count_to_100.cpp`](src/035_count_to_100.cpp) — The classic counting for-loop.
- [`062_countdown.cpp`](src/062_countdown.cpp) — Counting downwards from n to 1.
- [`063_multiplication_table.cpp`](src/063_multiplication_table.cpp) — First ten multiples of a number, two ways.
- [`079_even_numbers_to_100.cpp`](src/079_even_numbers_to_100.cpp) — Three loops that print the same evens, with different iteration counts.
- [`043_odd_multiples_of_3.cpp`](src/043_odd_multiples_of_3.cpp) — Four ways to list odd multiples of 3 up to 100, from wasteful to tight.
- [`001_for_loop_steps.cpp`](src/001_for_loop_steps.cpp) — A for-loop with a custom start and step size.
- [`026_while_loop.cpp`](src/026_while_loop.cpp) — A while-loop printing 11 to 20.
- [`099_do_while_loop.cpp`](src/099_do_while_loop.cpp) — do-while always runs its body once; while and for may not run at all.
- [`056_for_as_while.cpp`](src/056_for_as_while.cpp) — Every part of a for header is optional, so it can mimic while.
- [`006_continue_statement.cpp`](src/006_continue_statement.cpp) — continue skips the rest of the current round.
- [`065_infinite_loop_guarded.cpp`](src/065_infinite_loop_guarded.cpp) — What infinite loops look like, with a safety break so it is safe to run.
- [`070_expressions_in_loops.cpp`](src/070_expressions_in_loops.cpp) — while (a--) runs a times: the old value is tested, then it drops.
- [`069_predict_the_output.cpp`](src/069_predict_the_output.cpp) — A puzzle: how many times does the loop body run?
- [`022_nested_loops.cpp`](src/022_nested_loops.cpp) — Outer 5 rounds times inner 4 rounds gives 20 prints.
- [`017_arithmetic_progression.cpp`](src/017_arithmetic_progression.cpp) — Print the first n terms of 4, 9, 14, ...
- [`068_geometric_progression.cpp`](src/068_geometric_progression.cpp) — Print the first n terms of 2, 6, 18, ...
- [`039_alphabet_codes.cpp`](src/039_alphabet_codes.cpp) — Each letter next to its ASCII code, upper and lower case.

### Number crunching

- [`049_sum_of_three.cpp`](src/049_sum_of_three.cpp) — Read three numbers and add them.
- [`072_factorial.cpp`](src/072_factorial.cpp) — n! with a running product (long long keeps it correct up to 20!).
- [`020_factors.cpp`](src/020_factors.cpp) — List every divisor of a number.
- [`030_digit_count.cpp`](src/030_digit_count.cpp) — Peel digits off with /10 and count them.
- [`090_digit_sum.cpp`](src/090_digit_sum.cpp) — Add up the digits using % 10 and / 10.
- [`054_reverse_digits.cpp`](src/054_reverse_digits.cpp) — Build the reversed number one digit at a time.
- [`029_prime_or_composite.cpp`](src/029_prime_or_composite.cpp) — Trial division up to the square root.
- [`085_combinations.cpp`](src/085_combinations.cpp) — nCr with a helper that avoids huge intermediate factorials.
- [`077_swap_two_numbers.cpp`](src/077_swap_two_numbers.cpp) — Swapping with a temporary and with arithmetic only.
- [`047_circle_area.cpp`](src/047_circle_area.cpp) — Area = pi * r * r with a rounded pi.
- [`027_sphere_volume.cpp`](src/027_sphere_volume.cpp) — Volume = 4/3 * pi * r^3 (watch out for integer division).

### Patterns

- [`060_star_square.cpp`](src/060_star_square.cpp) — n x n block of stars.
- [`031_star_rectangle.cpp`](src/031_star_rectangle.cpp) — Rows x columns block of stars.
- [`087_hollow_rectangle.cpp`](src/087_hollow_rectangle.cpp) — Stars on the border, blanks inside.
- [`010_star_triangle.cpp`](src/010_star_triangle.cpp) — Right triangle that grows by one star per row.
- [`098_star_triangle_inverted.cpp`](src/098_star_triangle_inverted.cpp) — Triangle that shrinks by one star per row, built two ways.
- [`097_star_triangle_right_aligned.cpp`](src/097_star_triangle_right_aligned.cpp) — Right-aligned triangle, via padding and via a square with a condition.
- [`058_odd_star_triangle.cpp`](src/058_odd_star_triangle.cpp) — Row i holds 2i-1 stars (1, 3, 5, ...).
- [`048_rhombus.cpp`](src/048_rhombus.cpp) — A star square slanted by leading blanks.
- [`055_pyramid.cpp`](src/055_pyramid.cpp) — Centered pyramid, tracked with blank/star counters or with formulas.
- [`004_diamond.cpp`](src/004_diamond.cpp) — A pyramid plus its mirror: one loop with counters, or two loops.
- [`088_bridge.cpp`](src/088_bridge.cpp) — A solid base topped by two shrinking columns that lean inwards.
- [`091_star_plus.cpp`](src/091_star_plus.cpp) — A plus sign drawn on the middle row and column.
- [`033_number_square_columns.cpp`](src/033_number_square_columns.cpp) — Every row counts 1..n.
- [`089_number_square_rows.cpp`](src/089_number_square_rows.cpp) — Every row repeats its own row number.
- [`042_number_triangle.cpp`](src/042_number_triangle.cpp) — Row i lists 1..i.
- [`086_number_triangle_descending.cpp`](src/086_number_triangle_descending.cpp) — Row i counts down from n to i.
- [`093_odd_number_triangle.cpp`](src/093_odd_number_triangle.cpp) — Rows of odd numbers 1, 3, 5, ... generated two different ways.
- [`003_floyds_triangle.cpp`](src/003_floyds_triangle.cpp) — Consecutive numbers fill the triangle row by row.
- [`082_binary_triangle.cpp`](src/082_binary_triangle.cpp) — Alternating 1s and 0s decided by the parity of row+col.
- [`092_pascal_triangle.cpp`](src/092_pascal_triangle.cpp) — Pascal's triangle using a binomial-coefficient helper.
- [`012_alphabet_square.cpp`](src/012_alphabet_square.cpp) — Each row reads A, B, C, ...
- [`053_alphabet_square_alternating.cpp`](src/053_alphabet_square_alternating.cpp) — Each row repeats one letter; odd rows lowercase, even rows uppercase.
- [`096_concentric_squares.cpp`](src/096_concentric_squares.cpp) — Each cell shows its distance from the nearest edge, plus one.
- [`032_corner_layers.cpp`](src/032_corner_layers.cpp) — One quadrant of the concentric pattern: min(row, col).

### Functions

- [`057_function_syntax.cpp`](src/057_function_syntax.cpp) — Defining functions with no parameters and calling them.
- [`051_parameters_and_arguments.cpp`](src/051_parameters_and_arguments.cpp) — A parameter is the name in the definition; an argument is the value passed in.
- [`075_multiple_parameters.cpp`](src/075_multiple_parameters.cpp) — A function that takes two parameters.
- [`038_returning_a_value.cpp`](src/038_returning_a_value.cpp) — A non-void function hands a value back to the caller.
- [`037_early_return.cpp`](src/037_early_return.cpp) — return exits a function immediately, even a void one.
- [`050_library_functions.cpp`](src/050_library_functions.cpp) — A home-made minimum next to <cmath> and <algorithm> helpers.
- [`023_pass_by_value.cpp`](src/023_pass_by_value.cpp) — The function changes its own copy; the caller's variable is untouched.
- [`015_pass_by_reference.cpp`](src/015_pass_by_reference.cpp) — Changing the caller's variable through a pointer or a reference.

### Scope

- [`007_global_variable.cpp`](src/007_global_variable.cpp) — A global is visible, and writable, from every function.
- [`011_local_shadows_global.cpp`](src/011_local_shadows_global.cpp) — A local with the same name hides the global; :: reaches the global.
- [`019_block_scope.cpp`](src/019_block_scope.cpp) — A variable lives only inside the braces where it was declared.
- [`028_local_scope.cpp`](src/028_local_scope.cpp) — One function cannot see another function's locals; pass values in.
- [`067_loop_scope.cpp`](src/067_loop_scope.cpp) — A counter declared in the for-header dies with the loop.

### Pointers & references

- [`036_address_of.cpp`](src/036_address_of.cpp) — Every variable lives at its own address; & reveals it.
- [`074_pointer_basics.cpp`](src/074_pointer_basics.cpp) — Store an address in a pointer and modify the target through it.
- [`018_pointer_addresses.cpp`](src/018_pointer_addresses.cpp) — A pointer is itself a variable with an address of its own.

## Full index

Listed in file-number order. "Sample input" shows values you can type in; ⏎ means press Enter.

| # | File | Topic | What it shows | Sample input |
|---:|---|---|---|---|
| 1 | [001_for_loop_steps.cpp](src/001_for_loop_steps.cpp) | Loops | A for-loop with a custom start and step size. | none |
| 2 | [002_bool_type.cpp](src/002_bool_type.cpp) | Variables & data types | Any non-zero value converts to true; zero converts to false. | none |
| 3 | [003_floyds_triangle.cpp](src/003_floyds_triangle.cpp) | Patterns | Consecutive numbers fill the triangle row by row. | `5` |
| 4 | [004_diamond.cpp](src/004_diamond.cpp) | Patterns | A pyramid plus its mirror: one loop with counters, or two loops. | `4` |
| 5 | [005_escape_sequences.cpp](src/005_escape_sequences.cpp) | Getting started | Printing quotes, tabs and backslashes with escape sequences. | none |
| 6 | [006_continue_statement.cpp](src/006_continue_statement.cpp) | Loops | continue skips the rest of the current round. | none |
| 7 | [007_global_variable.cpp](src/007_global_variable.cpp) | Scope | A global is visible, and writable, from every function. | none |
| 8 | [008_four_digit_check.cpp](src/008_four_digit_check.cpp) | Decision making | Range test with the logical AND operator. | `4821` |
| 9 | [009_integer_arithmetic.cpp](src/009_integer_arithmetic.cpp) | Operators | +, -, * and / on integers (division truncates). | none |
| 10 | [010_star_triangle.cpp](src/010_star_triangle.cpp) | Patterns | Right triangle that grows by one star per row. | `5` |
| 11 | [011_local_shadows_global.cpp](src/011_local_shadows_global.cpp) | Scope | A local with the same name hides the global; :: reaches the global. | none |
| 12 | [012_alphabet_square.cpp](src/012_alphabet_square.cpp) | Patterns | Each row reads A, B, C, ... | `4` |
| 13 | [013_whole_number_check.cpp](src/013_whole_number_check.cpp) | Decision making | Decide whether a real number has a fractional part. | `6.5` |
| 14 | [014_divisible_by_5_or_3.cpp](src/014_divisible_by_5_or_3.cpp) | Decision making | Combining conditions with the logical OR operator. | `9` |
| 15 | [015_pass_by_reference.cpp](src/015_pass_by_reference.cpp) | Functions | Changing the caller's variable through a pointer or a reference. | none |
| 16 | [016_relational_operators.cpp](src/016_relational_operators.cpp) | Operators | Comparison operators yield 1 (true) or 0 (false). | none |
| 17 | [017_arithmetic_progression.cpp](src/017_arithmetic_progression.cpp) | Loops | Print the first n terms of 4, 9, 14, ... | `5` |
| 18 | [018_pointer_addresses.cpp](src/018_pointer_addresses.cpp) | Pointers & references | A pointer is itself a variable with an address of its own. | none |
| 19 | [019_block_scope.cpp](src/019_block_scope.cpp) | Scope | A variable lives only inside the braces where it was declared. | none |
| 20 | [020_factors.cpp](src/020_factors.cpp) | Number crunching | List every divisor of a number. | `36` |
| 21 | [021_declare_and_assign.cpp](src/021_declare_and_assign.cpp) | Variables & data types | Declaring, assigning and combining variables. | none |
| 22 | [022_nested_loops.cpp](src/022_nested_loops.cpp) | Loops | Outer 5 rounds times inner 4 rounds gives 20 prints. | none |
| 23 | [023_pass_by_value.cpp](src/023_pass_by_value.cpp) | Functions | The function changes its own copy; the caller's variable is untouched. | none |
| 24 | [024_naming_rules.cpp](src/024_naming_rules.cpp) | Variables & data types | What makes a legal identifier (the illegal ones are left commented out). | none |
| 25 | [025_largest_of_three.cpp](src/025_largest_of_three.cpp) | Decision making | Nested conditions, and the same idea written with a helper. | `12 40 7` |
| 26 | [026_while_loop.cpp](src/026_while_loop.cpp) | Loops | A while-loop printing 11 to 20. | none |
| 27 | [027_sphere_volume.cpp](src/027_sphere_volume.cpp) | Number crunching | Volume = 4/3 * pi * r^3 (watch out for integer division). | `3` |
| 28 | [028_local_scope.cpp](src/028_local_scope.cpp) | Scope | One function cannot see another function's locals; pass values in. | none |
| 29 | [029_prime_or_composite.cpp](src/029_prime_or_composite.cpp) | Number crunching | Trial division up to the square root. | `29` |
| 30 | [030_digit_count.cpp](src/030_digit_count.cpp) | Number crunching | Peel digits off with /10 and count them. | `90210` |
| 31 | [031_star_rectangle.cpp](src/031_star_rectangle.cpp) | Patterns | Rows x columns block of stars. | `3 6` |
| 32 | [032_corner_layers.cpp](src/032_corner_layers.cpp) | Patterns | One quadrant of the concentric pattern: min(row, col). | `5` |
| 33 | [033_number_square_columns.cpp](src/033_number_square_columns.cpp) | Patterns | Every row counts 1..n. | `4` |
| 34 | [034_post_versus_pre.cpp](src/034_post_versus_pre.cpp) | Operators | How prefix and postfix differ when the result is used. | none |
| 35 | [035_count_to_100.cpp](src/035_count_to_100.cpp) | Loops | The classic counting for-loop. | none |
| 36 | [036_address_of.cpp](src/036_address_of.cpp) | Pointers & references | Every variable lives at its own address; & reveals it. | none |
| 37 | [037_early_return.cpp](src/037_early_return.cpp) | Functions | return exits a function immediately, even a void one. | none |
| 38 | [038_returning_a_value.cpp](src/038_returning_a_value.cpp) | Functions | A non-void function hands a value back to the caller. | none |
| 39 | [039_alphabet_codes.cpp](src/039_alphabet_codes.cpp) | Loops | Each letter next to its ASCII code, upper and lower case. | none |
| 40 | [040_ascii_codes.cpp](src/040_ascii_codes.cpp) | Variables & data types | Characters are small integers; implicit and explicit conversion. | none |
| 41 | [041_ternary_into_variable.cpp](src/041_ternary_into_variable.cpp) | Decision making | Storing the result of a conditional expression in a variable. | `9` |
| 42 | [042_number_triangle.cpp](src/042_number_triangle.cpp) | Patterns | Row i lists 1..i. | `5` |
| 43 | [043_odd_multiples_of_3.cpp](src/043_odd_multiples_of_3.cpp) | Loops | Four ways to list odd multiples of 3 up to 100, from wasteful to tight. | none |
| 44 | [044_grade_from_marks.cpp](src/044_grade_from_marks.cpp) | Decision making | Grade bands written as nested if/else and as an else-if ladder. | `76` |
| 45 | [045_char_type.cpp](src/045_char_type.cpp) | Variables & data types | The char type: letters, symbols and digit characters. | none |
| 46 | [046_triangle_validity.cpp](src/046_triangle_validity.cpp) | Decision making | A triangle exists only if every pair of sides beats the third. | `3 4 8` |
| 47 | [047_circle_area.cpp](src/047_circle_area.cpp) | Number crunching | Area = pi * r * r with a rounded pi. | `2.5` |
| 48 | [048_rhombus.cpp](src/048_rhombus.cpp) | Patterns | A star square slanted by leading blanks. | `4` |
| 49 | [049_sum_of_three.cpp](src/049_sum_of_three.cpp) | Number crunching | Read three numbers and add them. | `4 5 6` |
| 50 | [050_library_functions.cpp](src/050_library_functions.cpp) | Functions | A home-made minimum next to <cmath> and <algorithm> helpers. | none |
| 51 | [051_parameters_and_arguments.cpp](src/051_parameters_and_arguments.cpp) | Functions | A parameter is the name in the definition; an argument is the value passed in. | none |
| 52 | [052_even_or_odd.cpp](src/052_even_or_odd.cpp) | Decision making | Parity check using the remainder operator. | `7` |
| 53 | [053_alphabet_square_alternating.cpp](src/053_alphabet_square_alternating.cpp) | Patterns | Each row repeats one letter; odd rows lowercase, even rows uppercase. | `4` |
| 54 | [054_reverse_digits.cpp](src/054_reverse_digits.cpp) | Number crunching | Build the reversed number one digit at a time. | `12345` |
| 55 | [055_pyramid.cpp](src/055_pyramid.cpp) | Patterns | Centered pyramid, tracked with blank/star counters or with formulas. | `4` |
| 56 | [056_for_as_while.cpp](src/056_for_as_while.cpp) | Loops | Every part of a for header is optional, so it can mimic while. | none |
| 57 | [057_function_syntax.cpp](src/057_function_syntax.cpp) | Functions | Defining functions with no parameters and calling them. | none |
| 58 | [058_odd_star_triangle.cpp](src/058_odd_star_triangle.cpp) | Patterns | Row i holds 2i-1 stars (1, 3, 5, ...). | `4` |
| 59 | [059_weekday_switch.cpp](src/059_weekday_switch.cpp) | Decision making | Map 1-7 to a weekday name with switch/case. | `3` |
| 60 | [060_star_square.cpp](src/060_star_square.cpp) | Patterns | n x n block of stars. | `4` |
| 61 | [061_absolute_value.cpp](src/061_absolute_value.cpp) | Decision making | Absolute value with a plain if/else. | `-17` |
| 62 | [062_countdown.cpp](src/062_countdown.cpp) | Loops | Counting downwards from n to 1. | `6` |
| 63 | [063_multiplication_table.cpp](src/063_multiplication_table.cpp) | Loops | First ten multiples of a number, two ways. | `19` |
| 64 | [064_modulo.cpp](src/064_modulo.cpp) | Operators | The remainder operator, including negative operands. | none |
| 65 | [065_infinite_loop_guarded.cpp](src/065_infinite_loop_guarded.cpp) | Loops | What infinite loops look like, with a safety break so it is safe to run. | none |
| 66 | [066_real_arithmetic.cpp](src/066_real_arithmetic.cpp) | Operators | The same four operators on doubles. | none |
| 67 | [067_loop_scope.cpp](src/067_loop_scope.cpp) | Scope | A counter declared in the for-header dies with the loop. | none |
| 68 | [068_geometric_progression.cpp](src/068_geometric_progression.cpp) | Loops | Print the first n terms of 2, 6, 18, ... | `5` |
| 69 | [069_predict_the_output.cpp](src/069_predict_the_output.cpp) | Loops | A puzzle: how many times does the loop body run? | none |
| 70 | [070_expressions_in_loops.cpp](src/070_expressions_in_loops.cpp) | Loops | while (a--) runs a times: the old value is tested, then it drops. | none |
| 71 | [071_expressions_in_conditions.cpp](src/071_expressions_in_conditions.cpp) | Decision making | Any expression can be a condition: assignments, side effects, literals. | none |
| 72 | [072_factorial.cpp](src/072_factorial.cpp) | Number crunching | n! with a running product (long long keeps it correct up to 20!). | `6` |
| 73 | [073_profit_or_loss.cpp](src/073_profit_or_loss.cpp) | Decision making | Compare cost price with selling price. | `80 100` |
| 74 | [074_pointer_basics.cpp](src/074_pointer_basics.cpp) | Pointers & references | Store an address in a pointer and modify the target through it. | none |
| 75 | [075_multiple_parameters.cpp](src/075_multiple_parameters.cpp) | Functions | A function that takes two parameters. | none |
| 76 | [076_text_versus_value.cpp](src/076_text_versus_value.cpp) | Getting started | Quotes print text literally; without quotes the expression is evaluated. | none |
| 77 | [077_swap_two_numbers.cpp](src/077_swap_two_numbers.cpp) | Number crunching | Swapping with a temporary and with arithmetic only. | none |
| 78 | [078_precedence.cpp](src/078_precedence.cpp) | Operators | Operator precedence and why parentheses matter. | none |
| 79 | [079_even_numbers_to_100.cpp](src/079_even_numbers_to_100.cpp) | Loops | Three loops that print the same evens, with different iteration counts. | none |
| 80 | [080_compound_assignment.cpp](src/080_compound_assignment.cpp) | Operators | -=, +=, *= and /= as shorthand for the long form. | none |
| 81 | [081_division_kinds.cpp](src/081_division_kinds.cpp) | Operators | Integer division versus floating-point division. | none |
| 82 | [082_binary_triangle.cpp](src/082_binary_triangle.cpp) | Patterns | Alternating 1s and 0s decided by the parity of row+col. | `5` |
| 83 | [083_hello_output.cpp](src/083_hello_output.cpp) | Getting started | cout basics: escape sequences, endl and chained insertions. | none |
| 84 | [084_ternary_even_odd.cpp](src/084_ternary_even_odd.cpp) | Decision making | The conditional operator used inside an output statement. | `8` |
| 85 | [085_combinations.cpp](src/085_combinations.cpp) | Number crunching | nCr with a helper that avoids huge intermediate factorials. | `10 3` |
| 86 | [086_number_triangle_descending.cpp](src/086_number_triangle_descending.cpp) | Patterns | Row i counts down from n to i. | `5` |
| 87 | [087_hollow_rectangle.cpp](src/087_hollow_rectangle.cpp) | Patterns | Stars on the border, blanks inside. | `4 7` |
| 88 | [088_bridge.cpp](src/088_bridge.cpp) | Patterns | A solid base topped by two shrinking columns that lean inwards. | `5` |
| 89 | [089_number_square_rows.cpp](src/089_number_square_rows.cpp) | Patterns | Every row repeats its own row number. | `4` |
| 90 | [090_digit_sum.cpp](src/090_digit_sum.cpp) | Number crunching | Add up the digits using % 10 and / 10. | `4821` |
| 91 | [091_star_plus.cpp](src/091_star_plus.cpp) | Patterns | A plus sign drawn on the middle row and column. | `5` |
| 92 | [092_pascal_triangle.cpp](src/092_pascal_triangle.cpp) | Patterns | Pascal's triangle using a binomial-coefficient helper. | `5` |
| 93 | [093_odd_number_triangle.cpp](src/093_odd_number_triangle.cpp) | Patterns | Rows of odd numbers 1, 3, 5, ... generated two different ways. | `4` |
| 94 | [094_multiples_of_3_and_5.cpp](src/094_multiples_of_3_and_5.cpp) | Decision making | Four-way branching on divisibility by 3 and 5. | `15` |
| 95 | [095_update_long_form.cpp](src/095_update_long_form.cpp) | Operators | Updating a variable by re-assigning it to itself. | none |
| 96 | [096_concentric_squares.cpp](src/096_concentric_squares.cpp) | Patterns | Each cell shows its distance from the nearest edge, plus one. | `4` |
| 97 | [097_star_triangle_right_aligned.cpp](src/097_star_triangle_right_aligned.cpp) | Patterns | Right-aligned triangle, via padding and via a square with a condition. | `5` |
| 98 | [098_star_triangle_inverted.cpp](src/098_star_triangle_inverted.cpp) | Patterns | Triangle that shrinks by one star per row, built two ways. | `5` |
| 99 | [099_do_while_loop.cpp](src/099_do_while_loop.cpp) | Loops | do-while always runs its body once; while and for may not run at all. | none |
| 100 | [100_increment_decrement.cpp](src/100_increment_decrement.cpp) | Operators | Prefix and postfix ++ and -- as standalone statements. | none |

## Conventions

- Every file starts with a two-line comment: a title and what the program demonstrates.
- Descriptive names (`row`, `col`, `blanks`, `stars`, `reversed`) are used instead of single letters wherever the logic benefits.
- Pattern programs print `* ` (star plus space) per cell, and two spaces for a blank cell, so columns line up.
- Where a topic has two or more classic solutions, the file implements each as its own small function and prints them one after another, so you can compare the outputs directly.
- Demonstrations of compile-time errors (such as using a variable outside its scope) keep the offending line **commented out** with the reason beside it, so every file builds cleanly. Uncomment the line to see the compiler's message.
- Programs that would loop forever are written with a safety `break`, so they are safe to run.
- Sizes that can overflow a plain `int` (factorials, reversed numbers, binomial coefficients, powers) use `long long`.

## Experiments to try

- Change the sample inputs to edge cases: `0`, a negative number, `1`, a very large number.
- Before running a program from the *Loops* or *Operators* topics, write down the exact output you expect, then compare.
- Re-draw a pattern by changing only the loop bounds; then try to derive a formula for the number of stars per row.
- Uncomment the error lines in the *Scope* programs and read each compiler message carefully.
- Turn the helper functions in the pattern programs into one shared header and call them from a single `main`.
