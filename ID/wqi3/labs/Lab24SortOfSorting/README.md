# Lab 24 - Sort Of Sorting

This lab can be found [here](https://open.kattis.com/problems/sortofsorting) if you would like to give it a try yourself.

## Goal

The goal of this lab is to sort by only the first 2 characters of each last name.

## Example
```
# I represents input and O represents output

I > make run
I > 4
I > ABC
I > AAB
I > ADE
I > AAA
O > AAB
O > AAA
O > ABC
O > ADE
```

**Explaination**
- It sorts the 4 phrases in alphabetical order. HOWEVER, it only sorts it based off of the first 2 characters.
- This is why AAA is not in front of ABA.

## Running

- This lab **CANNOT** be ran using `make run`. It is better to run this via Kattis as the usage of `while (cin >> ...)` blocks command line input from running properly.
- The test cases defined for this lab can be ran using `make tests`