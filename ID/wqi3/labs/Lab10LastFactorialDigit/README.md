# Lab 10 - Last Factorial Digit

This lab can be found [here](https://open.kattis.com/problems/lastfactorialdigit) if you would like to give it a try yourself.

## Goal

The goal of this lab is to output the last digit of N!. The first digit given is the amount of numbers to calculate the factorial of. All other numbers following are the factorials needed.

## Example

```
# I represents input and O represents output

I > make run
I > 1
I > 3
O > 6
```

**Explaination**

There is `1` factorial we are checking for, which is `3`.
`3 * 2 * 1 = 6`
Since the last digit in `6` is `6`, we print out `6`.

## Running

- This lab can be ran using `make run`
- The test cases defined for this lab can be ran using `make tests`