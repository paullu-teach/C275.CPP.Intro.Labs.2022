# Lab 11 - Harshad Numbers

This lab can be found [here](https://open.kattis.com/problems/harshadnumbers) if you would like to give it a try yourself.

## Goal

The goal of this lab is to output the largest integer possible given an integer, such that the sum of the integer's digits can be used to divide the original integer evenly.

## Example

```
# I represents input and O represents output

I > make run
I > 25
O > 27
```

**Explaination**
`25`'s digits combined are `2 + 5 = 7`. `25 % 7 != 0`, therefore it is not evenly divisible.
`26`'s digits combined are `2 + 6 = 8`, `26 % 8 != 0`, therefore it is not evenly divisible.
`27`'s digits combined are `2 + 7 = 9`, `27 % 9 == 0`, therefore it IS evenly divisble.
Therefore we output 27.

## Running

- This lab can be ran using `make run`
- The test cases defined for this lab can be ran using `make tests`