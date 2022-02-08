# Lab 22 - Cake

This lab can be found [here](https://open.kattis.com/problems/pieceofcake2) if you would like to give it a try yourself.

## Goal

The goal of this lab is to find the volume of the biggest slice of cake possible.

## Example
```
# I represents input and O represents output

I > make run
I > 15 8 3
O > 384
```

**Explaination**
- The cake is 15 x 15 x 4. (4 is a constant given in the problem description)
- The horizontal cut is made 8 in from a corner.
- The vertical cut is made 3 in from a corner.
- Therefore, the bigger slice is 8 x 12.
- Including height, that gives us 8 x 12 x 4 = `384`

## Running

- This lab can be ran using `make run`
- The test cases defined for this lab can be ran using `make tests`