# Lab 25 - Stacking Cups

This lab can be found [here](https://open.kattis.com/problems/cups) if you would like to give it a try yourself.

## Goal

The goal of this lab is to sort the cup names in order given their radius. However, some radiuses are doubled if the radius is given before the cup name.

## Example
```
# I represents input and O represents output

I > make run
I > 3
I > 10 blue
I > orange 6
I > yellow 2
O > yellow
O > blue
O > orange
```

**Explaination**
- There are 3 cups.
- The first cup is 5 in radius and is blue. (since it has the radius in front, we divide the radius by 2 to get the real radius)
- The second cup is orange and is 6.
- The third cup is yellow and is 2.
- If you put it in ascending order... you get `yellow`, `blue`, `orange`

## Running

- This lab can be ran using `make run`
- The test cases defined for this lab can be ran using `make tests`