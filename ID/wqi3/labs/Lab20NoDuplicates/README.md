# Lab 20 - No Duplicates

This lab can be found [here](https://open.kattis.com/problems/nodup) if you would like to give it a try yourself.

## Goal

The goal of this lab is to make sure the sentence does not contain any duplicate words.

## Example
```
# I represents input and O represents output

I > A B C A
O > no
```

**Explaination**
- The first line contains every single word we are checking for duplicates against.
- The phrase "A" is repeated twice. Therefore there is a duplicate, so we output "no"

## Running

- This lab **CANNOT** be ran using `make run`. It is better to run this via Kattis as the usage of `while (cin >> ...)` blocks command line input from running properly.
- The test cases defined for this lab can be ran using `make tests`