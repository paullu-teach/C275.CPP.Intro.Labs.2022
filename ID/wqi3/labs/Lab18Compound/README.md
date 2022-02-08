# Lab 18 - Compound

This lab can be found [here](https://open.kattis.com/problems/compoundwords) if you would like to give it a try yourself.

## Goal

The goal of this lab is to print all the unique combinations of the words given. There can be multiple lines of input.

## Example

```
# I represents input and O represents output

I > a bb
O > abb
O > bba
```

**Explaination**
- Since there is only 1 line, there are only 2 compound options possible. one where `a` is in front and `bb` is at the back, or the reverse.

## Running

- This lab **CANNOT** be ran using `make run`. It is better to run this via Kattis as the usage of `while (cin >> ...)` blocks command line input from running properly.
- The test cases defined for this lab can be ran using `make tests`