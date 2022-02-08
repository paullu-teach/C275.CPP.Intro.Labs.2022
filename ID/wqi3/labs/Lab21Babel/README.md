# Lab 21 - Babelfish

This lab can be found [here](https://open.kattis.com/problems/babelfish) if you would like to give it a try yourself.

## Goal

The goal of this lab is to translate the phrases given using a given dictionary.

## Example
```
# I represents input and O represents output

I > yes 1
I > this 2
I > was 3
I > translated 4
I > 
I > 1
I > 2
I > 3
I > 4
O > yes
O > this
O > was
O > translated
```

**Explaination**
- The first 4 lines describe the english word, and their foreign word equivalent.
- The 5th line is an empty line that tells the program to start translating.
- The 6th line and onwards are the foreign words. The program outputs their english word equivalent.
- `"yes"` `"this"` `"was"` `"translated"`

## Running

- This lab can be ran using `make run`
- The test cases defined for this lab can be ran using `make tests`