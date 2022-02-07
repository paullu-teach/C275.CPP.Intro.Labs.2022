# Lab 15 - Delimiter Soup

This lab can be found [here](https://open.kattis.com/problems/delimitersoup) if you would like to give it a try yourself.

## Goal

The goal of this lab is to determine if the string given is valid. (everything is closed and opened with the correct symbols) If it is invalid, it should print where the invalid token is and also what it was.

## Example

```
# I represents input and O represents output

I > make run
I > 8
I > ([] [] ]
O > ] 7
```

**Explaination**
- There are 8 characters.
- The string has a ] at index 7 when there is no opening ].
- Output ] and 7

## Running

- This lab can be ran using `make run`
- The test cases defined for this lab can be ran using `make tests`