# Lab 19 - Grand Adventure

This lab can be found [here](https://open.kattis.com/problems/thegrandadventure) if you would like to give it a try yourself.

## Goal

The goal of this lab is to see if our hero Jim can make it to the end of their adventures successfully.

## Example
```
# I represents input and O represents output

I > 1
I > ...........$$$$B
O > NO
```

**Explaination**
- The first line contains the amount of adventure storylines we have to parse. (1)
- The second line contains the first storyline, we can ignore every `.`, and we arrive at 4 consecutive dollars.
- We then arrive at a banker, so we lose 1 dollar.
- We arrive at the end of the adventure, however, we still have 3 dollars in our inventory. Therefore the adventure was failed and we output `"NO"`

## Running

- This lab can be ran using `make run`
- The test cases defined for this lab can be ran using `make tests`