### Problem Statement

Alex has just returned from trick-or-treating with a bag full of candy, which she has arranged into `numPiles` piles. Each pile contains a certain number of candies. Alex will be asleep for `numHours` hours, and you want to eat all the candies before she wakes up.

You can eat up to `c` candies per hour, but you must choose candies from only one pile per hour. If a pile has fewer than `c` candies, you can only eat the number of candies in that pile during that hour. Your goal is to determine the smallest number `c` such that you can finish all the candies in `numHours` hours.

### Input Format

1. The first line of the input contains an integer `numPiles` which represents the number of piles.
2. The next `numPiles` lines each contain an integer `candies[i]` representing the number of candies in the i-th pile.
3. The last line contains an integer `numHours` representing the number of hours Alex will be asleep for.

### Output Format

- Print a single integer `c` representing the smallest number of candies you need to eat per hour to finish all the candies before Alex wakes up.

### Constraints

- 1 ≤ numPiles ≤ 10^5
- 1 ≤ candies[i] ≤ 10^9
- 1 ≤ numHours ≤ 10^9

### Examples

#### Example 1

**Input:**

4  
4  
8  
10  
12  
8  

**Output:**

12  

#### Example 2

**Input:**

5  
2  
3  
5  
7  
11  
6  

**Output:**

8  

#### Example 3

**Input:**

3  
10  
20  
30  
5  

**Output:**

30