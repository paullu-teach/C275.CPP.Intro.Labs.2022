# Lab 12 - Radio Commercials

This lab can be found [here](https://open.kattis.com/problems/commercials) if you would like to give it a try yourself.

## Goal

The goal of this lab is to output the best sum of the profits earned from the longest commercial breaks chain possible. Kadane's algorithm is incredibly useful for this problem as was hinted in the C++ Intro Labs document. It allows us to create an O(n) solution to find the best possible chain sum.

## Example

```
# I represents input and O represents output

I > make run
I > 5 1
I > -1000 5 10 15 20
O > 46
```

**Explaination**
- There are 5 commercial breaks and each commercial break costs 1 dollar to run.
- The first commercial break (while impossible given the input range) is -1000. (-1001 if you consider the cost per commercial break) This is not a profit at all. However, we assume it is the best possible outcome for now.
- The profit from the second commercial break is 4, this is better than -1001, therefore we drop the -1001 and assume 4 as our best outcome.
- The profit from the remaining commercial breaks can be added onto the second as it will always remain profitable...
- This leads us to `46` dollars as the maximum profit earned from a sequence of commercial breaks.

## Running

- This lab can be ran using `make run`
- The test cases defined for this lab can be ran using `make tests`