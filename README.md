```
⚠️ NOTE: This program uses the official CS50 library (`cs50.h`).
It will NOT compile or run on a standard machine unless you have the CS50 library
installed or you are running it inside the CS50 environment/codespace.
```

# Cash

A simple C program that calculates the minimum number of U.S. coins
needed to make a given amount of change.

## Description

The program prompts the user to enter the amount of change owed in
dollars. It validates the input to ensure it is non-negative,
converts the value to cents, and then calculates how many quarters,
dimes, nickels, and pennies are required using a greedy algorithm.

## Features

- Accepts a non-negative monetary amount.
- Converts dollars to cents using rounding to avoid floating-point precision issues.
- Calculates:
  - Quarters (25¢)
  - Dimes (10¢)
  - Nickels (5¢)
  - Pennies (1¢)
- Displays the number of each coin needed.

## Example

```text
Change owed: 0.41

Quarters: 1
Dimes: 1
Nickels: 1
Pennies: 1
```

## How It Works

1. Prompts the user for the amount of change owed.
2. Repeats the prompt until a valid (non-negative) value is entered.
3. Converts the amount from dollars to cents.
4. Uses integer division and the modulo operator to determine the number of each coin.
5. Prints the result.

## Requirements

- C compiler (e.g., GCC or Clang)
- CS50 Library (`cs50.h`)
- Math library (`math.h`)

## Compilation

```bash
clang cash.c -o cash -lcs50 -lm
```

Or, if you're using the CS50 environment:

```bash
make cash
```

## Usage

```bash
./cash
```

Then enter the amount of change when prompted.

## Concepts Demonstrated

- Functions
- Input validation
- Integer arithmetic
- Greedy algorithms
- Floating-point rounding